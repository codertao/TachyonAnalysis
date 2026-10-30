
void FUN_0041cc70(int param_1)

{
  int iVar1;
  
  iVar1 = Var_FindSection(&DAT_005b2724);
  if (iVar1 != 0) {
    DAT_005b2768 = DAT_005b2768 + param_1 * 0x19;
    if (DAT_005b2768 < 0) {
      DAT_005b2768 = 0;
    }
    iVar1 = *(int *)(iVar1 + 0x20) + -0x19;
    if (iVar1 < DAT_005b2768) {
      DAT_005b2768 = iVar1;
    }
  }
  return;
}

