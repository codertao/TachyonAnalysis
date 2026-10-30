
void FUN_004320b0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(DAT_005b1f0c + 0x63c) != 0) {
    do {
      FUN_00431f50(2,0xffffffff,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(DAT_005b1f0c + 0x63c));
  }
  uVar2 = 0;
  do {
    iVar3 = 1 << ((byte)uVar2 & 0x1f);
    iVar1 = FUN_00432060(iVar3,DAT_005b2154);
    if (iVar1 != 0) {
      FUN_00432070(uVar2,iVar3);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  return;
}

