
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486ed0(void)

{
  DWORD DVar1;
  int iVar2;
  
  if (DAT_0056e000 != 0) {
    DVar1 = GetTickCount();
    iVar2 = DVar1 + DAT_00563e14;
    DAT_00563e14 = DAT_00563e14 + 1;
    FUN_004bcda0(iVar2);
    FUN_00486e90(&DAT_0056e00c,0);
    FUN_00486e90(&DAT_0056e0f0,1);
    FUN_00486e90(&DAT_0056e1d4,2);
    DAT_0056e318 = DAT_0056e318 + DAT_0056e000 / 100;
    DAT_0056e320 = DAT_0056e320 + DAT_0056e000;
    DAT_0056e004 = 0;
    FUN_004699d0(DAT_0056e30c + DAT_0056e2ec + DAT_0056e2cc);
    DAT_0056e30c = 0;
    DAT_0056e2ec = 0;
    _DAT_0056e324 = (float)DAT_0056e31c / (float)DAT_0056e320;
    DAT_0056e2cc = 0;
    FUN_00486380();
    DAT_0056e000 = 0;
    FUN_0049da00(s_PLAYER_SPINS_0055803c,&DAT_005833e0,&DAT_00583498);
  }
  return;
}

