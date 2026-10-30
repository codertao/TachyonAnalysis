
undefined4 FUN_0049e160(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *local_4;
  
  if (param_1 != 0) {
    puVar1 = *(uint **)(param_1 + 4);
    uVar6 = 0;
    local_4 = puVar1 + 1;
    puVar7 = local_4 + *puVar1 * 2;
    if (*puVar1 != 0) {
      do {
        iVar3 = FUN_004c67c0(puVar7,param_2);
        if (iVar3 == 0) {
          uVar4 = FUN_0049e020(param_1,local_4,param_3);
          return uVar4;
        }
        uVar5 = 0xffffffff;
        puVar8 = puVar7;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          uVar2 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
        } while ((char)uVar2 != '\0');
        uVar6 = uVar6 + 1;
        puVar7 = (uint *)((int)puVar7 + ~uVar5);
        local_4 = local_4 + 2;
      } while (uVar6 < *puVar1);
    }
  }
  return 0;
}

