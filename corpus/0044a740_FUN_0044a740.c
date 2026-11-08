
int FUN_0044a740(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_80 [128];
  
  uVar2 = FUN_0046e900();
  str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar2);
  if (((param_1 != 0) && (*(int *)(param_1 + 0xb0) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0xa9c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0xaa0);
    *(undefined4 *)(param_1 + 0xa9c) = 0;
    *(undefined4 *)(param_1 + 0xaa0) = 0;
    set_flag_10c_on_elem_by_id(&g_UiManager,param_1 + 0xf8,0x20000);
    Var_SetStr(g_PlayerVarStore,local_80,param_1 + 0x20,s_NO_CARD_0053644c);
    Var_SetStr(g_PlayerVarStore,local_80,param_1 + 0x40,&DAT_00547904);
    return iVar1;
  }
  return 0;
}

