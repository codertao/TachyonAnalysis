
void FUN_00443440(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_00562c04;
  uVar1 = FUN_00443420(DAT_005b2c0c);
  uVar4 = 0;
  DAT_00562c08 = 0;
  if (DAT_005a4000 != 0) {
    do {
      iVar2 = FUN_004c67c0(iVar3,uVar1);
      if (iVar2 == 0) {
        DAT_00562c08 = DAT_00562c08 + 1;
      }
      iVar3 = iVar3 + 0xb8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < DAT_005a4000);
  }
  FUN_00443560(0);
  return;
}

