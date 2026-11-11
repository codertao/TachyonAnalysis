
/* fill conn+0x134 with quadrant entities within conn+0x160 of camera conn+0x110 (-1 terminated);
   cursor conn+0x138 */

void Tach_SrvBuildFarList(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  vec3 local_c;
  
  piVar3 = *(int **)(param_1 + 0x134);
  local_c.x = *(int *)(param_1 + 0x110);
  local_c.y = *(int *)(param_1 + 0x114);
  local_c.z = *(int *)(param_1 + 0x118);
  for (iVar1 = **(int **)(*(int *)(param_1 + 200) + 100); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (((iVar1 != *(int *)(param_1 + 200)) && ((*(byte *)(iVar1 + 0xc3) & 1) == 0)) &&
       (uVar2 = distance_between((vec3 *)(iVar1 + 0x34),&local_c),
       uVar2 < *(uint *)(param_1 + 0x160))) {
      *piVar3 = iVar1;
      piVar3 = piVar3 + 1;
    }
  }
  *piVar3 = -1;
  if (piVar3 != *(int **)(param_1 + 0x134)) {
    *(int **)(param_1 + 0x138) = *(int **)(param_1 + 0x134);
  }
  return;
}

