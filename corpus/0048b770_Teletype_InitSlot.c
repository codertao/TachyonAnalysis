
/* sweep */

void Teletype_InitSlot(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x170;
  (&DAT_0056ad04)[param_1 * 0x5c] = 0;
  (&DAT_0056acd8)[param_1 * 0x5c] = 0;
  (&DAT_0056acdc)[param_1 * 0x5c] = 0;
  *(undefined4 *)(&DAT_0056acec + iVar1) = 0;
  *(undefined4 *)(&DAT_0056ac40 + iVar1) = 0;
  (&DAT_0056ad0c)[param_1 * 0x5c] = 0;
  (&DAT_0056ac38)[param_1 * 0x5c] = *(undefined4 *)(&DAT_0056ac34 + iVar1);
  return;
}

