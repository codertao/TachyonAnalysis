
undefined4 FUN_00414e30(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x76);
  if (((sVar1 != 0xc) && (sVar1 != 0xd)) && (sVar1 != 0xb)) {
    return 0;
  }
  return 1;
}

