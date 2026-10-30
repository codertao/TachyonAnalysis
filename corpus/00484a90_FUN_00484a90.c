
void FUN_00484a90(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar1 = FUN_0048b7c0(0);
  if (iVar1 != 0) {
    FUN_0048cc10(0,param_1);
    FUN_0048c820(0,0,0,0,&local_14);
    puVar2 = (undefined4 *)FUN_0048c800(0);
    local_10 = *puVar2;
    local_8 = puVar2[2];
    local_4 = puVar2[3] + local_14;
    local_c = puVar2[1] - local_14;
    Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseShipBuy_00557938,&local_10,0);
    Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseNews_00552c88,&DAT_00556e8c,0);
  }
  return;
}

