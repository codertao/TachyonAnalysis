
void FUN_0042c8d0(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  if ((((param_1 != (char *)0x0) && (param_2 != 0)) && ((*(uint *)(DAT_005b95e0 + 0xc) & 4) != 0))
     && ((*(uint *)(DAT_005b95e0 + 0xc) & 0x20) == 0)) {
    iVar1 = FUN_004b7870(&DAT_005b01ac);
    if (iVar1 != 0) {
      _strncpy((char *)(iVar1 + 0x1c),param_1,0x80);
      *(undefined4 *)(iVar1 + 0xa8) = param_6;
      *(undefined4 *)(iVar1 + 0xa4) = param_5;
      *(undefined4 *)(iVar1 + 0xac) = param_7;
      *(int *)(iVar1 + 0x18) = param_2;
      *(undefined4 *)(iVar1 + 0x9c) = param_3;
      *(undefined4 *)(iVar1 + 0xa0) = param_4;
      FUN_004b78c0(iVar1,&DAT_005b01d0);
    }
  }
  return;
}

