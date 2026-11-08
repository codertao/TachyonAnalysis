
/* on startup ack: callback 0x6af7d4 decides next stage */

void NetSrv_AdvanceStartupStage(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if (*(int *)(param_2 + 0x8c) == param_1) {
    if (DAT_006af7d4 == (code *)0x0) {
      *(undefined1 *)(param_2 + 0x88) = 0;
    }
    else {
      uVar1 = (*DAT_006af7d4)(param_2,*(undefined4 *)(param_2 + 0x90));
      *(undefined1 *)(param_2 + 0x88) = uVar1;
    }
    *(int *)(param_2 + 0x8c) = *(int *)(param_2 + 0x8c) + 1;
    *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + 1;
  }
  return;
}

