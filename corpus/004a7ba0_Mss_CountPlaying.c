
/* sweep */

int Mss_CountPlaying(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar2 = 0;
  uVar4 = 0;
  puVar3 = DAT_00601e78;
  if (DAT_00601e74 == 0) {
    return 0;
  }
  do {
    iVar1 = _AIL_sample_status_4(*puVar3);
    if ((iVar1 == 4) && (puVar3[2] == param_1)) {
      iVar2 = iVar2 + 1;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 4;
  } while (uVar4 < DAT_00601e74);
  return iVar2;
}

