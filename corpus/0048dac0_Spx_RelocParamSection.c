
/* relocate nested param section (buf+0x20 count / +0x24 offset, stride 0x14): fix sub-array ptrs
   rec+0xc/+0x10 by +buf+0x1a0; sub-entries stride 0x28 */

void Spx_RelocParamSection(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *(uint **)(param_1 + 0x24);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      puVar1[3] = puVar1[3] + *(int *)(param_1 + 0x1a0);
      puVar1[4] = puVar1[4] + *(int *)(param_1 + 0x1a0);
      piVar2 = (int *)puVar1[3];
      uVar3 = 0;
      if (*puVar1 != 0) {
        do {
          if ((*piVar2 == 0) && (piVar2[2] == 1)) {
            piVar2[3] = piVar2[3] * 10;
          }
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 10;
        } while (uVar3 < *puVar1);
      }
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 5;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
  }
  return;
}

