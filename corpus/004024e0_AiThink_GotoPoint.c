
/* fly to +0x344, then 0x4024d0 */

void AiThink_GotoPoint(int param_1)

{
  uint uVar1;
  
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) != 0) {
    FUN_0040f380((vec3 *)(param_1 + 0x34),(vec3 *)(param_1 + 0x344),param_1 + 0xdc);
    uVar1 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(param_1 + 0x344));
    if (uVar1 < 0x1f4000) {
      FUN_004024d0(param_1);
    }
  }
  return;
}

