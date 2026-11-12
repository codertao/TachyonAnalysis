
/* sweep */

void Teletype_SetString(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  *(undefined4 *)(&DAT_0056abbc + param_1 * 0x170) = param_2;
  *(undefined4 *)(&DAT_0056abc8 + param_1 * 0x170) = param_3;
  if (param_4 == 0) {
    iVar1 = Teletype_AllocBuffers();
  }
  else {
    iVar1 = Teletype_LayoutText(param_1);
  }
  (&DAT_0056ad08)[param_1 * 0x5c] = 1;
  if (iVar1 == 0) {
    Teletype_FreeSlot(param_1);
    (&DAT_0056ad08)[param_1 * 0x5c] = 0;
    return;
  }
  (&DAT_0056ad08)[param_1 * 0x5c] = 1;
  return;
}

