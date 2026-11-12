
/* sweep: SPACE.PWF */

void Sound_LoadSpacePwf(void)

{
  if ((g_FlightStateFlags & 2) != 0) {
    SndTrig_Load(s_SPACE_PWF_0053f1ec,&DAT_005a61e0,0xcccc);
    SndTrig_SetVarBC(4,&DAT_005a61e0);
    SndTrig_SetVarC0(8,&DAT_005a61e0);
  }
  return;
}

