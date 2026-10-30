
int FUN_00427010(undefined4 param_1,undefined4 param_2,int *param_3,undefined2 *param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined1 local_18 [24];
  
  uVar1 = 0xffffffff;
  local_24 = 0;
  local_20 = 0;
  local_1c = &DAT_00640000;
  if (param_5 != 0) {
    uVar1 = *(undefined4 *)(param_5 + 100);
  }
  iVar2 = FUN_00426f90(param_1,param_2,uVar1);
  if (iVar2 == 0) {
    FUN_0048e380(param_3,0xc);
    return 0;
  }
  FUN_004263a0(iVar2);
  FUN_00426370(iVar2);
  FUN_0052db6a(local_18,*(undefined4 *)(iVar2 + 0x4c),*(undefined4 *)(iVar2 + 0x50),
               *(undefined4 *)(iVar2 + 0x54));
  FUN_0052dbcd(local_18);
  FUN_004b24d0(&local_24,param_3);
  *param_3 = *param_3 + *(int *)(iVar2 + 0x34);
  param_3[1] = param_3[1] + *(int *)(iVar2 + 0x38);
  param_3[2] = param_3[2] + *(int *)(iVar2 + 0x3c);
  *param_4 = (short)((uint)*(undefined4 *)(iVar2 + 0x4c) >> 0x10);
  param_4[1] = (short)((uint)*(undefined4 *)(iVar2 + 0x50) >> 0x10);
  param_4[2] = 0;
  return iVar2;
}

