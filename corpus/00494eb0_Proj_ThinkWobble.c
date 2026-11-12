
/* sweep: guess */

void Proj_ThinkWobble(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  vec3 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if ((*(int **)(param_2 + 0xb4) != (int *)0x0) && (**(int **)(param_2 + 0xb4) != 0)) {
    uVar1 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)&DAT_005b9600);
    if (uVar1 < 0x2710001) {
      Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
      some_rotate_by_global((vec3 *)(param_2 + 0xc0),&local_30);
      local_30.y = local_30.y + *(int *)(param_1 + 0x38);
      local_30.x = local_30.x + ((vec3 *)(param_1 + 0x34))->x;
      local_30.z = local_30.z + *(int *)(param_1 + 0x3c);
      iVar2 = Particle_SpawnSimple
                        (&local_30,**(undefined4 **)(param_2 + 0xb4),0x10000,0,&local_24,2,
                         *(undefined4 *)(param_2 + 0xb8));
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x18) = 0x290;
        *(int *)(iVar2 + 0x4c) = ((vec3 *)(param_1 + 0x4c))->x;
        *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x1c);
      }
    }
  }
  return;
}

