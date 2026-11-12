
/* sweep */

void Sped_SetAliasStatus(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != -1) {
    iVar1 = Sped_FindAliasState(*(int *)(param_1 + 0xf8) + param_2 * 0x20);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = param_3;
    }
  }
  return;
}

