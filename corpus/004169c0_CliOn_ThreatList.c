
/* S->C 0x1105 handler */

void CliOn_ThreatList(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 1) == 0x13) {
      *(byte *)(iVar1 + 0xc0) = *(byte *)(iVar1 + 0xc0) | 0x20;
      ThreatList_Contains(iVar1);
      return;
    }
    *(byte *)(iVar1 + 0xc0) = *(byte *)(iVar1 + 0xc0) & 0xdf;
    ThreatList_Remove(iVar1);
  }
  return;
}

