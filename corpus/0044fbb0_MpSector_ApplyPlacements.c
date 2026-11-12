
/* sweep */

void MpSector_ApplyPlacements(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    Spx_ApplyPlacements(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14),param_2,
                        param_1);
  }
  return;
}

