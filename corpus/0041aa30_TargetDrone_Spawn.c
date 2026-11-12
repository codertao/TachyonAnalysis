
/* type 0xb target drone */

SpED * TargetDrone_Spawn(int param_1)

{
  int *piVar1;
  Quadrant *pQVar2;
  SpED *ent;
  uint uVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xdc) != 0)) {
    ent = (SpED *)DcbPool_Alloc(&g_PoolCommon,0xb,DAT_005b29cc);
    if (ent != (SpED *)0x0) {
      Quad_LinkDynamic(ent);
      uVar3 = global_bad_shift_rng();
      ent[1].prev = (SpED *)0x3;
      *(undefined2 *)&ent->field_0x74 = 1;
      *(undefined4 *)&ent->field_0x58 = DAT_005b293c;
      ent->field_0x7e = *(undefined1 *)&DAT_005b29c8[1].notify;
      ent->think = (void *)0x0;
      ent->postThink = (void *)0x0;
      ent->onCollide = (void *)0x0;
      ent->onDamage = CourseTarget_OnDestroyed;
      *(undefined4 *)&ent->field_0x18 = 0x10;
      ent->scale = 0x10000;
      *(undefined4 *)&ent->field_0x28 = 0x18;
      *(undefined4 *)&ent->field_0xb8 = 0x10000;
      ent->desc = DAT_005b29c8;
      Ent_UpdatePartTransforms(param_1 + 0x18);
      iVar4 = Pak_GetAttachPoint(*(undefined4 *)(param_1 + 0xdc),uVar3 & 3);
      piVar1 = *(int **)(iVar4 + 0xc);
      (ent->pos).x = *(int *)(param_1 + 0x34) + *piVar1;
      (ent->pos).y = piVar1[1] + *(int *)(param_1 + 0x38);
      (ent->pos).z = piVar1[2] + *(int *)(param_1 + 0x3c);
      (ent->ang).x = *(int *)(param_1 + 0x4c);
      (ent->ang).y = *(int *)(param_1 + 0x50);
      (ent->ang).z = *(int *)(param_1 + 0x54);
      local_4 = (uVar3 & 3) * -0x800000 + 0x800000;
      local_c = 0;
      local_8 = 0;
      Vec_RotateByOrientation(&local_c,&ent->ang);
      Ent_UpdatePartTransforms(&ent->field_0x18);
      iVar4 = Pak_GetAttachPoint(DAT_005b293c,0);
      piVar1 = *(int **)(iVar4 + 0xc);
      (ent->pos).x = (ent->pos).x - *piVar1;
      (ent->pos).y = (ent->pos).y - piVar1[1];
      pQVar2 = ent->quadrant;
      (ent->pos).z = (ent->pos).z - piVar1[2];
      ent->netFlags = 3;
      ent->stateFlags = 4;
      SectorMap_LinkStatic(ent,&pQVar2->staticSectorMap);
      return ent;
    }
  }
  return (SpED *)0x0;
}

