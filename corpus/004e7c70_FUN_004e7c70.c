
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7c70(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (DAT_00602338 != 0) {
    DAT_004e722c = DAT_00602338;
    DAT_004e7224 = 0;
    for (DAT_004e7228 = DAT_00602338; (DAT_004e7228 & 1) == 0; DAT_004e7228 = DAT_004e7228 >> 1) {
      DAT_004e7224 = DAT_004e7224 + 1;
    }
    DAT_004e7220 = 0;
    for (uVar5 = DAT_004e7228; (uVar5 & 1) != 0; uVar5 = uVar5 >> 1) {
      DAT_004e7220 = DAT_004e7220 + 1;
    }
    _DAT_004e7234 = 0;
    _DAT_004e7230 = (DAT_004e7228 + 1 >> 2) * 3 << ((byte)DAT_004e7224 & 0x1f);
    DAT_004e7244 = DAT_0060233c;
    DAT_004e723c = 0;
    for (DAT_004e7240 = DAT_0060233c; (DAT_004e7240 & 1) == 0; DAT_004e7240 = DAT_004e7240 >> 1) {
      DAT_004e723c = DAT_004e723c + 1;
    }
    DAT_004e7238 = 0;
    for (uVar5 = DAT_004e7240; (uVar5 & 1) != 0; uVar5 = uVar5 >> 1) {
      DAT_004e7238 = DAT_004e7238 + 1;
    }
    _DAT_004e724c = 1;
    _DAT_004e7248 = (DAT_004e7240 + 1 >> 2) * 3 << ((byte)DAT_004e723c & 0x1f);
    DAT_004e725c = DAT_00602340;
    DAT_004e7254 = 0;
    for (DAT_004e7258 = DAT_00602340; (DAT_004e7258 & 1) == 0; DAT_004e7258 = DAT_004e7258 >> 1) {
      DAT_004e7254 = DAT_004e7254 + 1;
    }
    DAT_004e7250 = 0;
    for (uVar5 = DAT_004e7258; (uVar5 & 1) != 0; uVar5 = uVar5 >> 1) {
      DAT_004e7250 = DAT_004e7250 + 1;
    }
    _DAT_004e7264 = 2;
    _DAT_004e7260 = (DAT_004e7258 + 1 >> 2) * 3 << ((byte)DAT_004e7254 & 0x1f);
    puVar1 = &DAT_004e7220;
    puVar6 = &DAT_004e7238;
    if (DAT_004e723c <= DAT_004e7224) {
      puVar1 = &DAT_004e7238;
      puVar6 = &DAT_004e7220;
    }
    puVar2 = puVar1;
    puVar3 = &DAT_004e7250;
    if (DAT_004e7254 <= (int)puVar1[1]) {
      puVar2 = &DAT_004e7250;
      puVar3 = puVar1;
    }
    puVar1 = puVar3;
    if ((int)puVar3[1] <= (int)puVar6[1]) {
      puVar1 = puVar6;
      puVar6 = puVar3;
    }
    puVar3 = &DAT_004e7268;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = &DAT_004e7280;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar1 + 1;
    }
    puVar6 = &DAT_004e7298;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar5 = DAT_00602338 & DAT_00602338 * 2 | DAT_0060233c & DAT_0060233c * 2 |
            DAT_00602340 & DAT_00602340 * 2;
    DAT_004e72b0 = uVar5 | uVar5 << 0x10;
    _DAT_004e72b4 = DAT_004e72b0 * 2 & DAT_004e72b0;
    _DAT_004e72b8 = DAT_004e7270 | _DAT_004e7288 | _DAT_004e72a0;
  }
  return;
}

