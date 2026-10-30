
undefined4 FUN_0047a6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_00563690;
  iVar2 = FUN_0047a900(param_1,param_2);
  iVar3 = FUN_0047a560(param_1,param_2);
  if ((iVar3 != 0) && (iVar2 != 0)) {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    FUN_0047a470();
    FUN_0047a490(&DAT_00571580,iVar2);
    uVar4 = FUN_0047a590(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  return 0xffffffff;
}

