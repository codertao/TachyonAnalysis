
undefined4 __cdecl FUN_10001c30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_10003c00(param_1,&local_4,(undefined4 *)&DAT_10019c24,&param_1,(undefined4 *)0x0);
  if (iVar1 == 0) {
    return 0xc;
  }
  *param_3 = param_1;
  *param_2 = local_4;
  return 0;
}

