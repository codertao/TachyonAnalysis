
void FUN_00406fe0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_5 + 0xc);
  if (param_3 + 1U < *(uint *)(param_5 + 0xc)) {
    uVar3 = param_3 + 1U;
  }
  if (uVar3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 4);
    do {
      *puVar2 = *param_4;
      puVar2[1] = param_4[1];
      puVar1 = param_4 + 2;
      param_4 = param_4 + 3;
      uVar3 = uVar3 - 1;
      puVar2[2] = *puVar1;
      puVar2 = puVar2 + 0xb;
    } while (uVar3 != 0);
  }
  return;
}

