
/* sweep: guess */

void Voice_SetChannelTarget(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(GLBL_SOME_CONTEXT + 0x90);
  if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    if (((iVar2 != 0) && (*(short *)(iVar2 + 0x76) == 1)) &&
       (uVar1 = *(ushort *)(iVar2 + 0xf2), uVar1 < 0x80)) {
      if (DAT_00565a34._2_1_ == '\0') {
        Voice_SetChannelDirty();
      }
      DAT_0056589c = (uint)uVar1;
      return;
    }
    Voice_Notify(0);
  }
  return;
}

