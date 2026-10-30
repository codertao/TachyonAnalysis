
undefined4 FUN_004178a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  iVar1 = param_1;
  param_1 = FUN_0041dc00((int)*(short *)(param_1 + 0x1a));
  if (param_1 != 0) {
    Desc_CreateByType(param_1 + 4,&param_1,0,local_4,1,0xffffffff);
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      uVar2 = (**(code **)(param_1 + 0x28))(param_1,iVar1);
      return uVar2;
    }
  }
  return 0;
}

