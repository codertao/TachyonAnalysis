
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Player_UpdateTargetRange(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8;
  
  DAT_005b3348 = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xcc) & 1) != 0)) &&
     (local_8 = (int)(longlong)ROUND(DAT_005b1ecc * _DAT_0052e818), local_8 < 5)) {
    uVar2 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar1 + 0x34));
    if (uVar2 < 0x7d0000) {
      DAT_005b3348 = 1;
    }
  }
  return;
}

