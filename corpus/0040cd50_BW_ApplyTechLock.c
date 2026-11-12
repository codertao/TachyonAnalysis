
/* sweep */

void BW_ApplyTechLock(int param_1,int param_2)

{
  if (GLBL_spacesav[0x6f] == 1) {
    if (5 < param_2) {
      *(undefined4 *)(param_1 + 8) = 6;
      return;
    }
    if (2 < param_2) {
      *(undefined4 *)(param_1 + 8) = 3;
    }
  }
  return;
}

