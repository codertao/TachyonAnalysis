
int FUN_0048e1f0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  if (param_1 == 0) {
    return param_3;
  }
  FUN_0048e970(param_4,DAT_005b2774,param_2,param_3,0xff00,0xffff,0x10000,0);
  iVar2 = *(int *)(param_1 + 0x24);
  param_3 = param_3 + 8;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      str_sprintf(local_80,s__02d____s_00559cd0,uVar1,
                  (&PTR_s_not_occured_005599a4)[*(int *)(iVar2 + 8)]);
      FUN_0048e970(local_80,DAT_005b2774,param_2,param_3,
                   (-(uint)(*(int *)(iVar2 + 8) != 0) & 0x7f7e01) + 0x8080ff,0xffff,0x10000,0);
      param_3 = param_3 + 8;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x14;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  return param_3;
}

