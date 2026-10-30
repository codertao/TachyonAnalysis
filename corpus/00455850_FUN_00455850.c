
void FUN_00455850(void)

{
  int iVar1;
  
  iVar1 = DAT_005b3300;
  if (DAT_005b3314 != 0) {
    *(code **)(DAT_005b3300 + 0x68) = PlayerDcb_Think;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    iVar1 = DAT_005b3318;
    FUN_004101c0(DAT_005b3318,3);
    Var_SetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_STARBASE_00532c20,
               *(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0x11c));
    FUN_004107b0(1);
    FUN_0045c500(*(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0xbc),iVar1,0xf1,&LAB_00455840,2,0);
  }
  return;
}

