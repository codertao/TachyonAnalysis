
/* sweep */

void Anim_ResetParticlePaths(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 0x50);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    puVar1 = puVar3 + 0xf;
    do {
      puVar5 = puVar1 + -10;
      puVar6 = puVar1;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = puVar1 + 7;
      puVar6 = puVar1 + 0x11;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar1[0x16] = *puVar3;
      puVar1[0x17] = puVar1[-0xe];
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x27;
      puVar1 = puVar1 + 0x27;
    } while (uVar4 < *(uint *)(param_1 + 0x4c));
  }
  return;
}

