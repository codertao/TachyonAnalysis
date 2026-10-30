
int FUN_0049e260(uint *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  
  iVar7 = 0;
  if (param_1 != (uint *)0x0) {
    puVar1 = *(uint **)((int)param_1 + 4);
    uVar5 = 0;
    puVar6 = puVar1 + *puVar1 * 2 + 1;
    param_1 = puVar1;
    if (*puVar1 != 0) {
      do {
        param_1 = param_1 + 2;
        iVar3 = FUN_004c67c0(puVar6,param_2);
        if (iVar3 == 0) {
          return iVar7;
        }
        iVar7 = iVar7 + *param_1;
        uVar4 = 0xffffffff;
        puVar8 = puVar6;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          uVar2 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
        } while ((char)uVar2 != '\0');
        uVar5 = uVar5 + 1;
        puVar6 = (uint *)((int)puVar6 + ~uVar4);
      } while (uVar5 < *puVar1);
    }
  }
  return -1;
}

