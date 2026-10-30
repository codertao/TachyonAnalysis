
/* find SPED def by id in world's two lists (world+0x3c -> {+4 active, +8 template}) */

void Sped_FindDef(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = Sped_FindInList(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 4),param_2);
  if (iVar1 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 8);
    }
    Sped_FindInList(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 8),param_2);
  }
  else if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4);
    return;
  }
  return;
}

