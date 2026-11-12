
void Hyper_Enter(void)

{
  int iVar1;
  
  Music_SetFadeOut(0x20);
  Audio_StopAllSamples();
  Bdf_SetNeutralLighting(1);
  if (DAT_005b00b0 == 0) {
    Hyper_LoadAssets();
  }
  Input_ResetForFlight();
  Light_SetAmbient(0x28);
  SpaceDust_SetEnabled(0);
  Hyper_TintPlayerShip(GLBL_SOME_CONTEXT);
  HyperStars_SpawnAll();
  if (DAT_005b00bc == 0) {
    DAT_005b00b4 = HyperTunnel_Spawn(0,DAT_005b0080);
    HyperTunnel_Spawn(*(int *)(DAT_005b0080 + 0x30) << 2,DAT_005b0080);
    iVar1 = DAT_005b0080;
  }
  else {
    DAT_005b00b4 = HyperTunnel_Spawn(0,DAT_005b008c);
    HyperTunnel_Spawn(*(int *)(DAT_005b008c + 0x30) << 2,DAT_005b008c);
    iVar1 = DAT_005b008c;
  }
  HyperTunnel_Spawn(*(int *)(iVar1 + 0x30) * -4,iVar1);
  Scene_Play(DAT_005b00b0,DAT_005b00b4,0xf1,&LAB_0042e220,1,0x50000);
  Scene_SetFade(0xffffffff,0xfffe0000,0,1);
  return;
}

