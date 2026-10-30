
undefined4
FUN_0046d770(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  iVar1 = FUN_0043fa70(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  str_sprintf(local_80,s_IMAGE__s_005444a8,param_3);
  iVar2 = FUN_0043a7a0(param_1,local_80);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_0046d580(param_1,param_3,param_4,param_5,param_6,param_9), iVar2 == 0)) {
    return 0;
  }
  str_sprintf(iVar1 + 0x80,iVar2);
  *(int *)(iVar1 + 0xdc) = param_4 + -1;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  Ui_AddTextToWindow(param_1,iVar1,0);
  FUN_0043f840(param_1,param_2,0x20000);
  FUN_0043f650(param_1,param_2,param_7,param_8);
  return 1;
}

