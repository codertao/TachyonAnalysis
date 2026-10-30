
void FUN_0044f3f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined1 local_80 [128];
  
  FUN_00452180(1);
  if (*(int *)(param_1 + 0x30) != -1) {
    FUN_0044f2d0(&DAT_0059023c + *(int *)(param_1 + 0x30) * 0x2c,param_4,param_5,0x30,0x30);
  }
  iVar1 = param_5 + DAT_00590d4c * -3 + 0x30;
  str_sprintf(local_80,&DAT_00536768,param_1);
  FUN_004c82b6(local_80);
  param_4 = param_4 + 0x38;
  FUN_0048e970(local_80,DAT_00590d40,param_4,iVar1,param_6,0xffff,0x10000,2);
  iVar1 = iVar1 + DAT_00590d4c;
  str_sprintf(local_80,s_Kills___d_005484f0,param_2);
  FUN_0048e970(local_80,DAT_00590d40,param_4,iVar1,0xffffff,0xffff,0x10000,2);
  iVar1 = iVar1 + DAT_00590d4c;
  str_sprintf(local_80,s_Deaths___d_005484e4,param_3);
  FUN_0048e970(local_80,DAT_00590d40,param_4,iVar1,0xffffff,0xffff,0x10000,2);
  return;
}

