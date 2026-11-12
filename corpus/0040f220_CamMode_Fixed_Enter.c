
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void CamMode_Fixed_Enter(int param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  if ((*(byte *)(DAT_005b95e0 + 0xc) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(DAT_005b1f0c + 0x29c);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  _DAT_005b2114 = *(undefined4 *)(param_1 + 0x28);
  if ((*(byte *)(DAT_005b95e0 + 0xc) & 0x20) == 0) {
    Hud_ResetTargetState();
    return;
  }
  return;
}

