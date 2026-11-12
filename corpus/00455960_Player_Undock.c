
/* sweep: "NO UNDOCK SCENE FOUND" */

void Player_Undock(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = DAT_005b3318;
  iVar2 = GLBL_SOME_CONTEXT;
  bVar4 = DAT_005b3318 == 0;
  DAT_005b3394 = 1;
  *(undefined4 *)(GLBL_SOME_CONTEXT + 0x6c) = 0;
  if (bVar4) {
    TextBar_Add(s_NO_STARBASE_DOCK_FOUND_TO_UNDOCK_005489d8,DAT_005a6320._2_1_);
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x8c) + 0xc0);
    if (iVar1 != 0) {
      Scene_Play(iVar1,iVar3,0x3c,Player_FinishUndock,0,0);
      Audio_SetMasterVolume(0xff);
      Fade_SetHold(0);
      return;
    }
  }
  Player_FinishUndock();
  TextBar_Add(s_NO_UNDOCK_SCENE_FOUND_00548a00,DAT_005a6320._2_1_);
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  return;
}

