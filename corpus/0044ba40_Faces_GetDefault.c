
/* sweep */

undefined4 Faces_GetDefault(void)

{
  undefined4 uVar1;
  
  if (DAT_00592e58 != 0) {
    uVar1 = Ui_FindImageByName(DAT_00592e58);
    return uVar1;
  }
  return 0;
}

