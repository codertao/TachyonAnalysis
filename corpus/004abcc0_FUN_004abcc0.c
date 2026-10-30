
void FUN_004abcc0(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  *(char *)((int)&DAT_005a6320 + param_1) = (char)param_1;
  if (DAT_00604488 == 8) {
    uVar1 = FUN_004a2e00(param_2,param_3,param_4);
    *(undefined4 *)(&DAT_005a6340 + param_1 * 4) = uVar1;
  }
  uVar1 = FUN_004e87c0(param_2,param_3,param_4);
  *(undefined4 *)(&DAT_005a63c0 + param_1 * 4) = uVar1;
  *(uint *)(&DAT_005a6440 + param_1 * 4) =
       ((param_2 & 0xff) * 0x100 + (param_3 & 0xff)) * 0x100 + (param_4 & 0xff);
  return;
}

