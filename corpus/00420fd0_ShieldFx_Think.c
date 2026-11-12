
/* follow target pos unless flag 1; intensity +0x2c += 10/frame to 127 then -10 to 0 -> free (~26
   frames) */

void ShieldFx_Think(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  }
  iVar1 = *(int *)(param_1 + 0x94);
  iVar3 = *(int *)(param_1 + 0x2c) + iVar1;
  *(int *)(param_1 + 0x2c) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else if (0x7f < iVar3) {
    *(undefined4 *)(param_1 + 0x2c) = 0x7f;
  }
  if ((*(int *)(param_1 + 0x2c) == 0) && (iVar1 < 0)) {
    Quad_Unlink(param_1);
    return;
  }
  if ((*(int *)(param_1 + 0x2c) == 0x7f) && (0 < iVar1)) {
    *(int *)(param_1 + 0x94) = -iVar1;
  }
  uVar2 = *(int *)(param_1 + 0x8c) + 1;
  *(uint *)(param_1 + 0x8c) = uVar2;
  *(short *)(param_1 + 0x30) = (short)(uVar2 >> ((byte)*(undefined4 *)(param_1 + 0x90) & 0x1f));
  return;
}

