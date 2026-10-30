
void FUN_0040d5b0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  iVar3 = *(int *)(*(int *)(param_1 + 200) + 0x8c);
  uVar1 = *(uint *)(iVar3 + 0x638);
  uVar2 = 0;
  if (uVar1 != 0) {
    puVar4 = (uint *)(iVar3 + 0x640);
    piVar5 = (int *)(param_1 + 0x164);
    while ((*piVar5 != 0 || ((*puVar4 & *(uint *)(param_2 + 0x104)) == 0))) {
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 1;
      piVar5 = piVar5 + 3;
      if (uVar1 <= uVar2) {
        return;
      }
    }
    piVar5 = (int *)(param_1 + 0x164 + uVar2 * 0xc);
    *piVar5 = param_2;
    iVar3 = FUN_00492b40(param_2,param_3);
    piVar5[1] = iVar3;
    piVar5[2] = iVar3;
  }
  return;
}

