
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004779b0(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_8;
  
  fVar2 = (float10)FUN_004bd55a((double)(DAT_00572020 + -6) * _DAT_0052ec20);
  DAT_0057202c = DAT_0057202c + param_1 * 3;
  local_8 = (int)(longlong)ROUND(fVar2 * (float10)_DAT_0052ec18);
  if ((local_8 < 1) || (DAT_0057202c < 0)) {
    local_8 = 0;
  }
  else if (DAT_0057202c <= local_8) goto LAB_00477a12;
  DAT_0057202c = local_8;
LAB_00477a12:
  iVar1 = 0;
  DAT_00572028 = DAT_00572024;
  while ((DAT_00572028 != 0 &&
         ((((*(int *)(DAT_00572028 + 0x78) != 0 || (*(int *)(DAT_00572028 + 0x80) == 0)) ||
           (*(int *)(DAT_00572028 + 0x7c) == 0)) || (iVar1 = iVar1 + 1, iVar1 <= DAT_0057202c))))) {
    DAT_00572028 = *(int *)(DAT_00572028 + 0x88);
  }
  FUN_00477b70();
  Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseInventory_00550a00,&DAT_0055099c,0);
  return;
}

