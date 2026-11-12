
/* sweep */

void Camera_SetDefaultMode(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00533ac8;
  uVar1 = DAT_00533ad4;
  if ((DAT_00533ad4 & 0x80000000) == 0) {
    while ((uVar1 & 1) == 0) {
      uVar1 = puVar2[0x11];
      puVar2 = puVar2 + 0xe;
      if ((uVar1 & 0x80000000) != 0) {
        return;
      }
    }
    CamTable_FindById(puVar2[4]);
  }
  return;
}

