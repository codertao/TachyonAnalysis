
void FUN_0042ba10(int param_1)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar1 = FUN_00492c30(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d4,&local_8,&local_c,&local_4);
  FUN_00498300(uVar1);
  if (local_4 == 0) {
    FUN_00428cf0(param_1 + 0xd0,local_8,local_c);
  }
  else {
    FUN_00428be0(param_1 + 0xd0,local_8,local_c,0xc0,0xc0,0xc0);
  }
  uVar1 = FUN_00492c30(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d8,&local_8,&local_c,&local_4);
  FUN_00498300(uVar1);
  if (local_4 == 0) {
    FUN_00428cf0(param_1 + 0x124,local_8,local_c);
    return;
  }
  FUN_00428be0(param_1 + 0x124,local_8,local_c,0xc0,0xc0,0xc0);
  return;
}

