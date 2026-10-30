
undefined4 FUN_00449750(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  undefined1 local_20 [32];
  
  uVar1 = Ship_GetCurrentModel();
  FUN_0043f620(&g_UiManager,s_IACFGLoadHalo_005478bc,0x20000);
  iVar2 = Cbin_Open_Inner(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  Cbin_GetParam(&DAT_00532af4,&DAT_00532c10,local_20,0x1f,0,4,1);
  uVar3 = FUN_0046e930(local_20);
  FUN_00449350(uVar3);
  FUN_0043e6a0(&g_UiManager,s_TxtCFGShip_005478b0,&DAT_00592f40);
  str_sprintf(&DAT_005a6114,uVar1);
  iVar2 = Cbin_SelectGroup(s_STARBASE_00532c20);
  if (iVar2 == 0) {
    Cbin_Close();
    return 0;
  }
  iVar2 = FUN_0049bdb0(s_HALO_PCX_005478a4,&DAT_00592f00,0x3f,0,4,1);
  if (iVar2 == 0) {
    Cbin_Close();
    return 0;
  }
  FUN_0049b930(s_HALO_PCX_005478a4,0,0,&local_24,1,2);
  FUN_0049b930(s_HALO_PCX_005478a4,0,0,&local_28,1,3);
  iVar2 = FUN_00469a30(&DAT_00592f00);
  if (iVar2 != 0) {
    FUN_0046d770(DAT_005879a0,s_IACFGLoadHalo_005478bc,iVar2 + 0x40,1,*(undefined4 *)(iVar2 + 0x60),
                 *(undefined4 *)(iVar2 + 100),local_24 + -0x14,local_28 + 0x19,0);
    FUN_0043f840(&g_UiManager,s_IACFGLoadHalo_005478bc,0x20000);
  }
  if (DAT_00598580 == 0) {
    FUN_004498e0();
    FUN_00449630();
    Cbin_Close();
    return 1;
  }
  if (DAT_00598580 == 1) {
    FUN_00449fc0();
  }
  Cbin_Close();
  return 1;
}

