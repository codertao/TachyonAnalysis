
/* sweep: guess */

void Player_FindSpawnSlot(void)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  psVar1 = &DAT_005b8fa0;
  piVar2 = &DAT_005b1f10;
  if (*(int *)(DAT_005b1f0c + 0x30c) != 0) {
    do {
      if (*psVar1 != 0) {
        if (*(int *)(*piVar2 + 0x50) != 0) {
          piVar2[0xb] = (int)psVar1[1];
        }
        piVar2 = piVar2 + 0xe;
      }
      uVar3 = uVar3 + 1;
      psVar1 = psVar1 + 2;
    } while (uVar3 < *(uint *)(DAT_005b1f0c + 0x30c));
  }
  return;
}

