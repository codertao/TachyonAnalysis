
void FUN_00450ec0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0058f488 != 0) {
    uVar1 = FUN_0048e800(DAT_005a6140,0x8b,0xc4c4ff);
    FUN_00450e60(4,uVar1);
  }
  iVar2 = FUN_00450bf0();
  if (iVar2 != 0) {
    FUN_00450e60(2,&DAT_0058f440,0xc4c4ff);
    FUN_00450e60(3,DAT_0058f460 + 1,0xc4c4ff);
    uVar1 = FUN_00426870(DAT_005b7e44,0xc4c4ff);
    FUN_00450e60(1,uVar1);
  }
  return;
}

