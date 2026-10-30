
void FUN_00428eb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  iVar1 = param_1;
  uVar2 = FUN_00428e30(DAT_005b01d8,*(undefined4 *)(param_1 + 0x47c));
  uVar2 = FUN_00492c30(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d4,*(undefined4 *)(iVar1 + 0x478),
                       *(undefined4 *)(iVar1 + 0x470),*(undefined4 *)(iVar1 + 0x474),uVar2,0,
                       *(undefined4 *)(iVar1 + 0x480));
  uVar2 = FUN_004930e0(uVar2);
  FUN_00428130(uVar2);
  uVar2 = FUN_00428e30(DAT_005b01dc,*(undefined4 *)(iVar1 + 0x498));
  uVar2 = FUN_00492c30(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d8,*(undefined4 *)(iVar1 + 0x494),
                       *(undefined4 *)(iVar1 + 0x48c),*(undefined4 *)(iVar1 + 0x490),uVar2,0,
                       *(undefined4 *)(iVar1 + 0x49c));
  uVar2 = FUN_004930e0(uVar2);
  FUN_00428130(uVar2);
  uVar2 = FUN_00492c30(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d4,&local_18,local_14,&param_1);
  FUN_00498300(uVar2);
  if (param_1 == 1) {
    str_sprintf(local_10,&PTR_DAT_00536774,local_18);
    FUN_004281a0(local_10,*(undefined4 *)(iVar1 + 0x4e8),*(undefined4 *)(iVar1 + 0x4e0),
                 *(undefined4 *)(iVar1 + 0x4e4),*(undefined4 *)(iVar1 + 0x4f4),0,
                 *(undefined4 *)(iVar1 + 0x4f0));
  }
  uVar2 = FUN_00492c30(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d8,&local_18,local_14,&param_1);
  FUN_00498300(uVar2);
  if (param_1 == 1) {
    str_sprintf(local_10,&PTR_DAT_00536774,local_18);
    FUN_004281a0(local_10,*(undefined4 *)(iVar1 + 0x504),*(undefined4 *)(iVar1 + 0x4fc),
                 *(undefined4 *)(iVar1 + 0x500),*(undefined4 *)(iVar1 + 0x510),0,
                 *(undefined4 *)(iVar1 + 0x50c));
  }
  if ((DAT_005b2154 & 0x1000) != 0) {
    str_sprintf(local_10,&DAT_0053676c,DAT_005b2150);
    FUN_004281a0(local_10,*(undefined4 *)(iVar1 + 0x520),*(undefined4 *)(iVar1 + 0x518),
                 *(undefined4 *)(iVar1 + 0x51c),*(undefined4 *)(iVar1 + 0x52c),0,
                 *(undefined4 *)(iVar1 + 0x528));
    FUN_00428130(*(undefined4 *)(iVar1 + 0x530),*(undefined4 *)(iVar1 + 0x53c),
                 *(undefined4 *)(iVar1 + 0x534),*(undefined4 *)(iVar1 + 0x538),
                 *(undefined4 *)(iVar1 + 0x548),0,*(undefined4 *)(iVar1 + 0x544));
  }
  return;
}

