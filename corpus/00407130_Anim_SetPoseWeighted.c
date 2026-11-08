
/* PART_DEST * weight/256 -> rot buffer */

void Anim_SetPoseWeighted(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    piVar1 = *(int **)(param_3 + 8);
    uVar2 = 0;
    if (*(int *)(param_3 + 4) != 0) {
      do {
        *(int *)(param_4 + *piVar1 * 0xc) = piVar1[1] * param_6 >> 8;
        *(int *)(param_4 + 4 + *piVar1 * 0xc) = piVar1[2] * param_6 >> 8;
        *(int *)(param_4 + 8 + *piVar1 * 0xc) = piVar1[3] * param_6 >> 8;
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 7;
      } while (uVar2 < *(uint *)(param_3 + 4));
    }
    if (param_5 != 0) {
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x1c);
    }
    if (-1 < *(int *)(param_3 + 0x20)) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_3 + 0x20) >> 0x10;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  }
  return;
}

