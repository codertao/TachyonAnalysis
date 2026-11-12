
/* sweep: guess */

void Joy_ApplyDeadzone(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 * 2;
  iVar1 = param_2 * 4;
  iVar2 = param_2 * 8;
  if ((param_1 & 0xffff) == 0xffff) {
    Joy_ClearButtonFlag(param_2);
    Joy_ClearButtonFlag(param_2);
    Joy_ClearButtonFlag(iVar2);
    Joy_ClearButtonFlag(iVar3);
    Joy_ClearButtonFlag(iVar1);
    return;
  }
  Joy_SetButtonFlag();
  if (0x898 < (int)param_1) {
    if ((int)param_1 < 0x1a91) {
      Joy_SetButtonFlag(param_2);
    }
    else {
      if (0x2bc0 < (int)param_1) {
        if ((int)param_1 < 0x3a99) {
          Joy_ClearButtonFlag(param_2);
          Joy_SetButtonFlag(iVar3);
          Joy_ClearButtonFlag(iVar1);
          Joy_SetButtonFlag(iVar2);
          return;
        }
        if ((int)param_1 < 0x4ee9) {
          Joy_ClearButtonFlag(param_2);
          Joy_SetButtonFlag(iVar3);
          Joy_ClearButtonFlag(iVar1);
          Joy_ClearButtonFlag(iVar2);
          return;
        }
        if ((int)param_1 < 0x60e1) {
          Joy_ClearButtonFlag(param_2);
          Joy_SetButtonFlag(iVar3);
          Joy_SetButtonFlag(iVar1);
          Joy_ClearButtonFlag(iVar2);
          return;
        }
        if ((int)param_1 < 0x7211) {
          Joy_ClearButtonFlag(param_2);
        }
        else {
          if (0x8408 < (int)param_1) goto LAB_004a1b62;
          Joy_SetButtonFlag(param_2);
        }
        Joy_ClearButtonFlag(iVar3);
        Joy_SetButtonFlag(iVar1);
        Joy_ClearButtonFlag(iVar2);
        return;
      }
      Joy_ClearButtonFlag(param_2);
    }
    Joy_ClearButtonFlag(iVar3);
    Joy_ClearButtonFlag(iVar1);
    Joy_SetButtonFlag(iVar2);
    return;
  }
LAB_004a1b62:
  Joy_SetButtonFlag(param_2);
  Joy_ClearButtonFlag(iVar3);
  Joy_ClearButtonFlag(iVar1);
  Joy_ClearButtonFlag(iVar2);
  return;
}

