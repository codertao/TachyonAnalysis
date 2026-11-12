
/* sweep */

void Snd3D_SetParams(int param_1,undefined4 *param_2,byte param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if ((param_3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *param_2;
    }
    if ((param_3 & 2) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = param_2[1];
    }
    if ((param_3 & 4) != 0) {
      *(undefined4 *)(param_1 + 0x24) = param_2[3];
    }
    if ((param_3 & 8) != 0) {
      *(undefined4 *)(param_1 + 0x30) = param_2[6];
      *(undefined4 *)(param_1 + 0x34) = param_2[7];
      *(undefined4 *)(param_1 + 0x38) = param_2[8];
    }
    if ((param_3 & 0x10) != 0) {
      if (((*(byte *)(param_1 + 0x50) & 2) != 0) && (DAT_005a6640 == 0)) {
        *(undefined4 *)(param_1 + 0x3c) = param_2[9];
        *(undefined4 *)(param_1 + 0x40) = param_2[10];
        uVar1 = param_2[0xb];
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x44) = uVar1;
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}

