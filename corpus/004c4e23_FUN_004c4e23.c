
undefined4 FUN_004c4e23(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_006c9e80) &&
     ((*(byte *)((&DAT_006c9d80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_004c576e(param_1);
    uVar1 = FUN_004c4e88(param_1,param_2,param_3);
    FUN_004c57cd(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_004c4e11();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004c4e1a();
  *puVar2 = 0;
  return 0xffffffff;
}

