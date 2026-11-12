
/* sweep: guess */

undefined4 Sapper_BurnOff(int param_1)

{
  int iVar1;
  
  iVar1 = WeaponList_Find(*(undefined4 *)(param_1 + 100),param_1);
  if (iVar1 != 0) {
    Sapper_Detach(iVar1);
    return 1;
  }
  return 0;
}

