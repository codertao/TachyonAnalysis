
/* sweep */

void Blit_CopyRect(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = DAT_005a4b30 >> 3;
  puVar1 = (undefined4 *)(DAT_005a4b34 * param_2 + DAT_005a4b2c + uVar2 * param_1);
  puVar4 = (undefined4 *)(DAT_005a4b28 * param_6 + DAT_005a4b20 + uVar2 * param_5);
  if (param_4 != 0) {
    param_1 = param_4;
    do {
      puVar5 = puVar4;
      puVar6 = puVar1;
      for (uVar3 = uVar2 * param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar2 * param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      puVar1 = (undefined4 *)((int)puVar1 + DAT_005a4b34);
      puVar4 = (undefined4 *)((int)puVar4 + DAT_005a4b28);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

