
void FUN_00445ae0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_4;
  
  puVar4 = &DAT_005a3180;
  for (iVar2 = 0x82; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_00583580;
  puVar4 = (undefined4 *)&DAT_005a34e0;
  for (iVar2 = 0x82; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)&DAT_005a34e0;
  puVar5 = &DAT_005a3180;
  local_4 = 0x20;
  do {
    uVar1 = puVar3[0x11];
    if ((uVar1 & 2) != 0) {
      puVar6 = puVar3;
      puVar7 = puVar5;
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar5 = puVar5 + 0x1a;
    }
    if ((uVar1 & 4) != 0) {
      puVar6 = puVar3;
      puVar7 = puVar4;
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = puVar4 + 0x1a;
    }
    puVar3 = puVar3 + 0x1a;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

