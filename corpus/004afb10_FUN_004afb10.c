
uint FUN_004afb10(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  bVar1 = *(byte *)((int)param_1 + 0x19);
  iVar5 = ((int)(uint)bVar1 >> 1) + -1;
  if (-1 < iVar5) {
    puVar2 = param_1;
    puVar3 = param_1;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        puVar6 = puVar2 + 0xe;
        puVar7 = puVar3 + 7;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar2 = puVar2 + 0xe;
        puVar3 = puVar3 + 7;
      } while (iVar5 != 0);
    }
    *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) >> 1;
  }
  return (uint)bVar1;
}

