
void FUN_0047e490(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_70 [8];
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_c;
  int local_8;
  
  puVar6 = &DAT_005a67a0;
  puVar7 = local_70;
  for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_c = DAT_005a6810;
  uVar1 = (uint)((longlong)DAT_00571fd4 * (longlong)DAT_005a67e4) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_00571fd4 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  uVar2 = (uint)((longlong)DAT_00571fd0 * (longlong)DAT_005a67e4) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_00571fd0 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  uVar3 = (uint)((longlong)DAT_00571fdc * (longlong)DAT_005a67e4) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_00571fdc * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  local_8 = DAT_00571fd8;
  uVar4 = (uint)((longlong)DAT_00571fd8 * (longlong)DAT_005a67e4) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_00571fd8 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  if ((int)uVar1 < (int)local_4c) {
    uVar1 = local_4c;
  }
  if ((int)uVar2 < (int)local_50) {
    uVar2 = local_50;
  }
  if ((int)local_44 < (int)uVar3) {
    uVar3 = local_44;
  }
  if ((int)local_48 < (int)uVar4) {
    uVar4 = local_48;
  }
  FUN_00452070(uVar2,uVar1,uVar4,uVar3,1);
  DAT_005a67d4 = local_3c;
  DAT_005a67d8 = local_38;
  DAT_005a67dc = local_34;
  DAT_005a67e0 = local_30;
  copy_str32_to_some_global(&DAT_005a67a0);
  FUN_0047d770();
  FUN_0047dae0();
  if (DAT_005524dc != 0) {
    DAT_005524dc = FUN_0047de80();
    if (DAT_005524dc != 0) goto LAB_0047e591;
  }
  FUN_0047e0b0();
LAB_0047e591:
  if (DAT_005524e0 != 0) {
    FUN_0047de80();
  }
  FUN_0047e420();
  FUN_0047dcd0();
  FUN_0047d980();
  FUN_00452070(local_50,local_4c,local_48,local_44,1);
  copy_str32_to_some_global(&DAT_005a67a0);
  FUN_00452180(local_c);
  return;
}

