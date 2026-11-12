
/* sweep: poolType 0xb/0xc/0xd */

undefined4 MiscObj_CollideFilter(undefined4 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x76);
  if (((sVar1 != 0xc) && (sVar1 != 0xd)) && (sVar1 != 0xb)) {
    return 0;
  }
  return 1;
}

