
undefined4 FUN_004a7f50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  iVar1 = _AIL_enumerate_3D_providers_12(&local_8,&local_4,&local_c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_004c67c0(param_1,local_c);
    if (iVar1 == 0) break;
    iVar1 = _AIL_enumerate_3D_providers_12(&local_8,&local_4,&local_c);
  }
  uVar2 = FUN_004a7ef0(local_4,param_2);
  return uVar2;
}

