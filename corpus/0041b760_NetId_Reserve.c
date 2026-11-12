
/* sweep */

undefined4 NetId_Reserve(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 + param_3 * 2;
  if (uVar1 < **(uint **)(param_1 + 0x24)) {
    return 0;
  }
  **(uint **)(param_1 + 0x24) = uVar1 + 2;
  return 1;
}

