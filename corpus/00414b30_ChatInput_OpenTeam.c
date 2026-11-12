
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void ChatInput_OpenTeam(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FlightUi_SetPanelActive(4,1);
  if (iVar1 != 0) {
    _DAT_005b9264 = 1;
    DAT_005b91cc = 8;
    DAT_005b91c8 = DAT_005b3a24;
    ChatInput_SetTargetLabel(DAT_005b921c);
    Input_PushBindingSet(&PTR_DAT_0053e8c0);
    puVar2 = &DAT_005b90c4;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_005b91c4 = 0;
    Snd_Play2D(0x10,0,0,0xff);
  }
  return;
}

