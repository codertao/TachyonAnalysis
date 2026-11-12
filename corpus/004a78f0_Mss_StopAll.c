
/* sweep */

void Mss_StopAll(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = DAT_00601e78;
  if (DAT_00601e74 != 0) {
    do {
      _AIL_end_sample_4(*puVar1);
      puVar1[2] = 0;
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 4;
    } while (uVar2 < DAT_00601e74);
  }
  return;
}

