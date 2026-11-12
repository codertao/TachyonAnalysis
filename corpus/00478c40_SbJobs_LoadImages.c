
/* sweep */

void SbJobs_LoadImages(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_00589728 != 0) {
    puVar1 = (undefined4 *)(DAT_00589730 + 0x174);
    iVar2 = DAT_00589728;
    do {
      if ((puVar1 != (undefined4 *)0x174) && (puVar1[-0x59] != 0)) {
        Ui_LoadImageCached(&GLBL_UI_ELEM_LIST,puVar1 + -9,1,puVar1[-1],*puVar1,0);
      }
      puVar1 = puVar1 + 0x6e;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

