
/* sweep */

void Scene_Tick(void)

{
  int iVar1;
  
  iVar1 = DAT_0058f1c0;
  Scene_FireCallback();
  if (iVar1 != 0) {
    Scene_TickMembers(iVar1,iVar1 + 0x30);
    Scene_TickCamera(iVar1,iVar1 + 0x40);
    Scene_TickTexts(iVar1,*(undefined4 *)(iVar1 + 0x70));
    *(int *)(iVar1 + 0x70) = *(int *)(iVar1 + 0x70) + 1;
    if ((DAT_0058f210 != 0) && (DAT_0058f214 != 0)) {
      DAT_0058f214 = DAT_0058f214 + -1;
    }
  }
  return;
}

