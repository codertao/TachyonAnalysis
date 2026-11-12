
/* sweep: guess */

int Target_FindAttacker(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 0x40000000;
  for (iVar1 = *(int *)(*(int *)(param_1 + 100) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x94)) {
    if ((*(ushort *)(iVar1 + 0x76) == param_2) &&
       (uVar2 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar1 + 0x34)), uVar2 < uVar4)) {
      iVar3 = iVar1;
      uVar4 = uVar2;
    }
  }
  return iVar3;
}

