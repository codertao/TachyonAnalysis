
void FUN_0042ddb0(char *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != (char *)0x0) {
    iVar1 = FUN_004b7870(&DAT_005b01ac);
    if (iVar1 != 0) {
      _strncpy((char *)(iVar1 + 0x1c),param_1,0x80);
      *(undefined4 *)(iVar1 + 0xb0) = param_2;
      FUN_004b78f0(iVar1,&DAT_005b01d4);
    }
  }
  return;
}

