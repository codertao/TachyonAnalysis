
/* spawn gate entity; preloads linked sector .spx via Spx_LoadSector(def+0x38) */

void Gate_SpawnAndPreload(int param_1,Desc *param_2,undefined4 param_3)

{
  SpED *ent;
  int iVar1;
  
  ent = (SpED *)DcbPool_Alloc(&g_PoolAI,10,param_3);
  if (ent != (SpED *)0x0) {
    Quad_LinkDynamic(ent);
    if (DAT_0058b06c == 0) {
      DAT_0058b06c = ent->netId;
    }
    ent->desc = param_2;
    ent[1].poolSerial = 0;
    ent[1].scale = param_1;
    *(SpED **)(param_1 + 0x28) = ent;
    *(int *)&ent->field_0x58 = param_2[2].regSlot;
    ent->scale = 0x10000;
    ent->field_0x7e = (char)param_2[2].otherNameCount;
    (ent->pos).x = *(int *)(param_1 + 8);
    (ent->pos).y = *(int *)(param_1 + 0xc);
    (ent->pos).z = *(int *)(param_1 + 0x10);
    (ent->ang).x = *(int *)(param_1 + 0x14) << 0x10;
    (ent->ang).y = *(int *)(param_1 + 0x18) << 0x10;
    (ent->ang).z = *(int *)(param_1 + 0x1c) << 0x10;
    if ((*(uint *)(param_1 + 0x24) & 0x200) == 0) {
      ent->think = (void *)0x0;
    }
    else {
      ent->think = &LAB_004263e0;
    }
    ent->postThink = (void *)0x0;
    ent->onCollide = (void *)0x0;
    *(undefined4 *)&ent->field_0x18 = 0;
    ent->onDamage = &LAB_00460f30;
    ent->team = 0;
    ent->netFlags = 3;
    ent->stateFlags = 0x44;
    if (*(int *)(param_1 + 0x58) == 0) {
      ent->stateFlags = 0x45;
    }
    *(undefined4 *)&ent->field_0xb8 = 0;
    *(undefined4 *)&ent->field_0xbc = 0;
    FUN_0045cbf0(ent,&ent->quadrant->staticSectorMap);
    if ((*(char *)(param_1 + 0x38) == '\0') || (*(int *)(param_1 + 0x58) != 0)) {
      Gate_InitRegional(ent,param_1);
      ent[1].pos.z = -1;
    }
    else {
      iVar1 = Spx_LoadSector(param_1 + 0x38,0);
      if (iVar1 != 0) {
        Gate_InitLocal(ent,param_1,iVar1);
        ent[1].pos.z = *(int *)(iVar1 + 0x30);
      }
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      ent[1].poolSerial = ent[1].poolSerial | 2;
    }
    Gate_UpdateCollideState(ent);
  }
  return;
}

