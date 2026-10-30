
void FUN_0042bda0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0xa60);
  iVar3 = DAT_005b1f0c + 0xd0;
  uVar2 = FUN_00455e20(&DAT_005b20e0,iVar3,DAT_005b20e4,uVar1);
  FUN_0042bd40(param_1 + 0xa28,DAT_005b20e0,uVar2);
  if (((byte)DAT_005b2154 & 4) != 0) {
    uVar2 = FUN_00455e00(&DAT_005b20e0,iVar3,DAT_005b20fc,uVar1);
    FUN_0042bd40(param_1 + 0xa0c,DAT_005b20f8,uVar2);
  }
  iVar3 = FUN_00455e40(&DAT_005b20e0,iVar3,DAT_005b20ec,uVar1);
  FUN_0042bd40(param_1 + 0xa44,DAT_005b20f0 + DAT_005b20e8,iVar3 << 1);
  return;
}

