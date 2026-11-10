
/* SPX group-name-table index -> SHIPTEXT.BIN global key index (-1 if none) */

undefined4 Spx_GroupNameToShiptextIdx(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  if (*(uint *)(param_2 + 0x108) <= param_1) {
    return 0xffffffff;
  }
  uVar1 = Rtxt_KeyIndex(DAT_005a6144,*(int *)(param_2 + 0x10c) + param_1 * 0x20);
  return uVar1;
}

