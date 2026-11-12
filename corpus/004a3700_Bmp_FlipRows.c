
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Bmp_FlipRows(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = DAT_0060315c * _DAT_00603100;
  puVar1 = (undefined1 *)Mem_Alloc(DAT_00603104,4,0);
  uVar7 = uVar7 >> 3;
  uVar5 = DAT_00603104;
  for (uVar3 = uVar7; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar8 = 0;
    puVar2 = param_1 + (uVar5 - 1) * uVar7;
    uVar4 = 0;
    puVar6 = puVar1;
    if (uVar5 != 0) {
      do {
        uVar8 = uVar8 + 1;
        *puVar6 = *puVar2;
        puVar2 = puVar2 + -uVar7;
        puVar6 = puVar6 + 1;
        uVar4 = DAT_00603104;
      } while (uVar8 < DAT_00603104);
    }
    uVar8 = 0;
    uVar5 = 0;
    puVar6 = puVar1;
    puVar2 = param_1;
    if (uVar4 != 0) {
      do {
        uVar8 = uVar8 + 1;
        *puVar2 = *puVar6;
        puVar2 = puVar2 + uVar7;
        puVar6 = puVar6 + 1;
        uVar5 = DAT_00603104;
      } while (uVar8 < DAT_00603104);
    }
    param_1 = param_1 + 1;
  }
  OurFreeMem(puVar1);
  return;
}

