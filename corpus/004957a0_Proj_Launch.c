
/* vel = fwd * def+0x54; optional muzzle offset; position += vel * age (latency fast-forward) */

void Proj_Launch(int param_1,vec3 *param_2,int *param_3,int param_4)

{
  int *piVar1;
  vec3 *fvec;
  int iVar2;
  vec3 local_24;
  undefined1 local_18 [24];
  
  iVar2 = *(int *)(param_1 + 0xdc);
  fvec = (vec3 *)(param_1 + 0xa0);
  fvec->x = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar2 + 0x54);
  Rot_FromAngles(local_18,param_2);
  some_rotate_by_global(fvec,fvec);
  if (param_3 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x3c);
  }
  else {
    local_24.x = *param_3;
    local_24.y = param_3[1];
    local_24.z = param_3[2];
    some_rotate_by_global(&local_24,&local_24);
    piVar1 = (int *)(param_1 + 0x34);
    *piVar1 = *(int *)(param_1 + 0x34) + local_24.x;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + local_24.y;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + local_24.z;
    *(int *)(param_1 + 0xe0) = *piVar1;
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x3c);
    local_24.x = 0;
    local_24.y = 0;
    local_24.z = *(int *)(*(int *)(param_1 + 0x58) + 0x30) +
                 *(int *)(*(int *)(param_1 + 0xdc) + 0x54);
    some_rotate_by_global(&local_24,&local_24);
    *piVar1 = *piVar1 + local_24.x;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + local_24.y;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + local_24.z;
  }
  if (param_4 != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_4 * fvec->x;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * param_4;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_4 * *(int *)(param_1 + 0xa8);
  }
  return;
}

