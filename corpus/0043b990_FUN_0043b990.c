
void FUN_0043b990(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5
                 )

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (DAT_00564ae4 == 0) {
      iVar1 = FUN_0043ba90(param_1,param_2);
      if ((iVar1 != 0) && (iVar1 = iVar1 + 0x50, iVar1 != 0)) {
        if (param_4 != (undefined4 *)0x0) {
          uVar2 = FUN_004e668a(param_3,iVar1);
          *param_4 = uVar2;
        }
        if (param_5 != (undefined4 *)0x0) {
          uVar2 = FUN_004e636c(iVar1);
          *param_5 = uVar2;
          return;
        }
      }
    }
    else {
      FUN_0043ba10(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

