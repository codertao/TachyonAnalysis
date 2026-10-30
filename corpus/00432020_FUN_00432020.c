
void FUN_00432020(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(DAT_005b1f0c + 0x638) != 0) {
    do {
      uVar1 = FUN_00431fd0(uVar2);
      FUN_00431f50(1,uVar1,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(DAT_005b1f0c + 0x638));
  }
  return;
}

