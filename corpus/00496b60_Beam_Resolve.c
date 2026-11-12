
/* sweep: guess */

int Beam_Resolve(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  vec3 local_24;
  undefined1 local_18 [24];
  
  piVar3 = param_1;
  piVar1 = (int *)param_1[2];
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = 0;
  local_38 = 0;
  local_34 = *(int *)(*param_1 + 0xa0);
  local_30 = *piVar1;
  local_2c = piVar1[1];
  local_28 = piVar1[2];
  iVar5 = 0;
  local_3c = 0;
  Rot_FromAngles(local_18,(vec3 *)param_1[3]);
  local_24.z = *(int *)(*param_1 + 0x9c);
  some_rotate_by_global(&local_24,&local_24);
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    Beam_CreateMiss(&local_30,0);
  }
  param_1 = (int *)0x0;
  if (0 < local_34) {
    do {
      piVar3[2] = (int)&local_30;
      iVar4 = Beam_CreateHit(piVar3,&local_24,&local_38);
      if (iVar5 == 0) {
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0xf4) = 0;
          *(int *)(iVar4 + 0x90) = piVar3[7];
          puVar2 = (undefined4 *)piVar3[5];
          *(undefined4 *)(iVar4 + 0xfc) = *puVar2;
          *(undefined4 *)(iVar4 + 0x100) = puVar2[1];
          *(undefined4 *)(iVar4 + 0x104) = puVar2[2];
          iVar5 = iVar4;
        }
      }
      else if (iVar4 != 0) {
        *(int *)(iVar4 + 0xf4) = iVar5;
      }
      if (local_3c != 0) {
        *(int *)(local_3c + 0xf8) = iVar4;
      }
      if (iVar4 == 0) {
        return iVar5;
      }
      if (local_38 != 0) {
        return iVar5;
      }
      local_30 = local_30 + local_24.x;
      local_2c = local_2c + local_24.y;
      local_28 = local_28 + local_24.z;
      param_1 = (int *)((int)param_1 + 1);
      local_3c = iVar4;
    } while ((int)param_1 < local_34);
  }
  return iVar5;
}

