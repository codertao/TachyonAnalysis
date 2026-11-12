
/* refine: debugger hook per VM step: IP -> source line (debug info +0x124/+0x128); mode 1 listbox
   select + watch, mode 2 text console */

void MusDbg_OnStep(int param_1,int param_2)

{
  int *piVar1;
  WPARAM wParam;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(*(int *)(DAT_0066921c + 0x124) + *(int *)(param_2 + 4));
  iVar3 = *(int *)(DAT_0066921c + 0x128);
  piVar4 = piVar1;
  if (0 < iVar3) {
    do {
      if (*piVar1 <= param_1 - *(int *)(*(int *)(param_2 + 4) + 0x20)) {
        piVar4 = piVar1;
      }
      piVar1 = piVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  DAT_006693e0 = piVar4[1];
  if (DAT_0066924c == 1) {
    SendMessageA(DAT_00669254,0x186,DAT_006693e0,0);
    wParam = DAT_006693e0 - 10;
    if ((int)wParam < 0) {
      wParam = 0;
    }
    SendMessageA(DAT_00669254,0x197,wParam,0);
    MusDbg_UpdateWatch(param_2);
  }
  if (DAT_0066924c == 2) {
    iVar2 = MusDbg_ShowVars(param_2,0);
    iVar3 = DAT_006693e0 - 5;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if (DAT_00669244 == 0) {
      MusDbg_ShowListing(iVar2);
    }
    else {
      MusDbg_ShowSource(DAT_00669244,iVar2,0x14 - iVar2,iVar3,DAT_006693e0,DAT_006693e0);
    }
    MusDbg_ConsoleRow(0,0x18);
  }
  if (DAT_00669248 != (code *)0x0) {
    (*DAT_00669248)(DAT_006693e0);
  }
  return;
}

