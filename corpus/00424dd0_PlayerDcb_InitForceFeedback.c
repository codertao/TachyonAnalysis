
/* sweep */

void PlayerDcb_InitForceFeedback(void)

{
  uint uVar1;
  
  uVar1 = 3;
  if (GLBL_spacesav[0x31] != 0) {
    uVar1 = 7;
  }
  if (GLBL_spacesav[0x30] != 0) {
    uVar1 = uVar1 | 8;
  }
  FF_SetActive(GLBL_spacesav[0x3d]);
  Joy_SetVare0d0(uVar1);
  return;
}

