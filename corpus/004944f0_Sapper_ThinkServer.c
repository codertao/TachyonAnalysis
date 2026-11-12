
/* server sapper: follow target; every 8 frames send msg 0x11 with sapper kind def+0xf4 (8 remote,1
   inertial,2 power,4 shield) to target desc+0x34 */

void Sapper_ThinkServer(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  vec3 local_24;
  undefined1 local_18 [24];
  
  iVar3 = *(int *)(param_1 + 0xf4);
  Rot_FromAngles(local_18,(vec3 *)(iVar3 + 0x4c));
  some_rotate_by_global((vec3 *)(param_1 + 0xfc),&local_24);
  *(int *)(param_1 + 0x34) = *(int *)(iVar3 + 0x34) + local_24.x;
  *(int *)(param_1 + 0x38) = *(int *)(iVar3 + 0x38) + local_24.y;
  *(int *)(param_1 + 0x3c) = *(int *)(iVar3 + 0x3c) + local_24.z;
  if ((((((*(uint *)(param_1 + 0xd0) ^ DAT_005897e4) & 7) == 0) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 0xf4), iVar1 != 0)) &&
      (*(int *)(iVar3 + 0x8c) != 0)) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 0x8c) + 0x34), pcVar2 != (code *)0x0)) {
    (*pcVar2)(iVar3,0x11,iVar1);
  }
  if ((*(int *)(param_1 + 0xd4) != 0) &&
     (iVar3 = *(int *)(param_1 + 0xd4) + -1, *(int *)(param_1 + 0xd4) = iVar3, iVar3 == 0)) {
    Sapper_Detach(param_1);
  }
  return;
}

