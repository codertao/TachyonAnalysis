
/* sweep */

undefined4 Sped_GetCollFlags(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x24) & 0x400) != 0) {
    uVar1 = 0x20;
  }
  return uVar1;
}

