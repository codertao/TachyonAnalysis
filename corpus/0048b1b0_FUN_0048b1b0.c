
int FUN_0048b1b0(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  uVar6 = 0x40000000;
  if (param_1 != 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 100) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x94))
    {
      if (((*(byte *)(iVar1 + 0xc2) == param_2) &&
          (((*(int *)(iVar1 + 0x8c) == 0 ||
            (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x5c), pcVar2 == (code *)0x0)) ||
           (iVar3 = (*pcVar2)(iVar1), iVar3 != 0)))) &&
         (uVar4 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar1 + 0x34)), uVar4 < uVar6))
      {
        iVar5 = iVar1;
        uVar6 = uVar4;
      }
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar6;
    }
    return iVar5;
  }
  return 0;
}

