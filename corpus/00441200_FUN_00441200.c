
void FUN_00441200(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)mem_GetMemEx_probably_alloc(0x134,4,0,s_mnu_Credit_0053ff7c);
  iVar2 = (int)DAT_005a41b4;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = puVar3;
    for (iVar4 = 0x4d; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    if (DAT_005a41b4 == (undefined4 *)0x0) {
      DAT_005a41b4 = puVar3;
      return;
    }
    iVar4 = *(int *)(iVar2 + 0x130);
    while (iVar1 = iVar4, iVar1 != 0) {
      iVar2 = iVar1;
      iVar4 = *(int *)(iVar1 + 0x130);
    }
    *(undefined4 **)(iVar2 + 0x130) = puVar3;
  }
  return;
}

