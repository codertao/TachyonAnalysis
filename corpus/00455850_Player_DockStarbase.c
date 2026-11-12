
/* sweep: STARBASE var */

void Player_DockStarbase(void)

{
  int iVar1;
  
  iVar1 = GLBL_SOME_CONTEXT;
  if (DAT_005b3314 != 0) {
    *(code **)(GLBL_SOME_CONTEXT + 0x68) = PlayerDcb_Think;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    iVar1 = DAT_005b3318;
    CamTable_SetEntity(DAT_005b3318,3);
    Var_SetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_STARBASE_00532c20,
               *(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0x11c));
    Fade_SetHold(1);
    Scene_Play(*(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0xbc),iVar1,0xf1,&LAB_00455840,2,0);
  }
  return;
}

