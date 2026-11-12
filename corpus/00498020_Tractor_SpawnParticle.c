
/* sweep: guess */

SpED * Tractor_SpawnParticle(SpED *param_1,Pool *param_2,int param_3)

{
  SpED *ent;
  uint uVar1;
  int iVar2;
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = -0x10000;
  ent = (SpED *)DcbPool_Alloc(&DAT_005b32b0,0x12,param_1->quadrant);
  if (ent == (SpED *)0x0) {
    return (SpED *)0x0;
  }
  ent[1].poolSerial = (int)(&DAT_0055a4a8 + param_3 * 0xc);
  ent[1].pendingNext = param_1;
  ent[1].pool = param_2;
  *(undefined4 *)&ent->field_0x58 = DAT_00565518;
  *(undefined4 *)&ent->field_0x18 = 0;
  ent->think = Proj_ThinkSeek;
  *(undefined2 *)&ent->field_0x74 = 1;
  ent->render = Proj_Think;
  uVar1 = global_bad_shift_rng();
  iVar2 = (uVar1 & 7) + 2;
  Rot_FromAngles(local_18,&param_1->ang);
  some_rotate_by_global(&local_24,&local_24);
  (ent->pos).x = iVar2 * local_24.x + (param_1->pos).x;
  (ent->pos).y = iVar2 * local_24.y + (param_1->pos).y;
  (ent->pos).z = iVar2 * local_24.z + (param_1->pos).z;
  (ent->ang).x = (param_1->ang).x;
  (ent->ang).y = (param_1->ang).y;
  (ent->ang).z = (param_1->ang).z;
  Quad_LinkDynamic(ent);
  return ent;
}

