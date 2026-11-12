
/* sweep: guess */

void Ship_LoadSounds(int param_1,int param_2)

{
  int iVar1;
  
  Timer_PauseBegin();
  if ((*(char *)(param_1 + 0x170) != '\0') && (*(int *)(param_1 + 0x1b8) == 0)) {
    iVar1 = SndTrig_Preload(param_1 + 0x170,&DAT_005a61e0);
    *(int *)(param_1 + 0x1b8) = iVar1;
    if (iVar1 == 0) {
      Ship_WarnLoopMissing(param_1,param_1 + 0x170);
    }
  }
  if ((*(char *)(param_1 + 0x188) != '\0') && (*(int *)(param_1 + 0x1bc) == 0)) {
    iVar1 = SndTrig_Preload(param_1 + 0x188,&DAT_005a61e0);
    *(int *)(param_1 + 0x1bc) = iVar1;
    if (iVar1 == 0) {
      Ship_WarnLoopMissing(param_1,param_1 + 0x188);
    }
  }
  if (param_2 != 0) {
    if ((*(char *)(param_1 + 0x1d4) != '\0') && (*(int *)(param_1 + 0x21c) == 0)) {
      iVar1 = SndTrig_Preload(param_1 + 0x1d4,&DAT_005a61e0);
      *(int *)(param_1 + 0x21c) = iVar1;
      if (iVar1 == 0) {
        Ship_WarnLoopMissing(param_1,param_1 + 0x1d4);
      }
    }
    if ((*(char *)(param_1 + 0x1ec) != '\0') && (*(int *)(param_1 + 0x220) == 0)) {
      iVar1 = SndTrig_Preload(param_1 + 0x1ec,&DAT_005a61e0);
      *(int *)(param_1 + 0x220) = iVar1;
      if (iVar1 == 0) {
        Ship_WarnLoopMissing(param_1,param_1 + 0x1ec);
      }
    }
    if ((*(char *)(param_1 + 0x204) != '\0') && (*(int *)(param_1 + 0x224) == 0)) {
      iVar1 = SndTrig_Preload(param_1 + 0x204,&DAT_005a61e0);
      *(int *)(param_1 + 0x224) = iVar1;
      if (iVar1 == 0) {
        Ship_WarnLoopMissing(param_1,param_1 + 0x204);
      }
    }
  }
  Timer_PauseEnd();
  return;
}

