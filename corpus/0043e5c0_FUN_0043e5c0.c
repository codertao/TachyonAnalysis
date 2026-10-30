
void FUN_0043e5c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043e3d0(param_1,param_2);
  if ((iVar1 != 0) && (param_3 != (undefined4 *)0x0)) {
    *(undefined4 *)(iVar1 + 0x10c) = *param_3;
    *(undefined4 *)(iVar1 + 0x110) = param_3[1];
    *(undefined4 *)(iVar1 + 0x114) = param_3[2];
    *(undefined4 *)(iVar1 + 0x118) = param_3[3];
    FUN_0043e610(param_1,param_2,4);
  }
  return;
}

