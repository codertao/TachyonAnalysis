
/* sweep: guess */

void Map_SectionExists(int param_1)

{
  int iVar1;
  
  iVar1 = Var_FindSection(&DAT_00587904);
  if (iVar1 != 0) {
    DAT_00587948 = DAT_00587948 + param_1 * 0x19;
    iVar1 = *(int *)(iVar1 + 0x20) + -0x19;
    if (iVar1 < DAT_00587948) {
      DAT_00587948 = iVar1;
    }
    if (DAT_00587948 < 0) {
      DAT_00587948 = 0;
    }
  }
  return;
}

