
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411e30(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_18 [24];
  
  FUN_004b1ab0(param_1 + 0x18,2);
  iVar2 = *(int *)(param_1 + 0xd8);
  FUN_004b1be0(auStack_18,param_2);
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xd8)) {
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x34) - *(int *)(param_1 + 0x34);
    piVar1 = (int *)(iVar2 + 0x40);
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x38) - *(int *)(param_1 + 0x38);
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x3c) - *(int *)(param_1 + 0x3c);
    call_copy_mathresult_to_global(auStack_18);
    FUN_004b2410(piVar1,piVar1);
    *piVar1 = *piVar1 + *(int *)(param_1 + 0x40);
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + *(int *)(param_1 + 0x44);
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + *(int *)(param_1 + 0x48);
    if (iVar2 == *(int *)(GLBL_SOME_CONTEXT + 0x110)) {
      DAT_005b1b78 = 1;
      _DAT_005b1b7c = *piVar1;
      _DAT_005b1b80 = *(undefined4 *)(iVar2 + 0x44);
      _DAT_005b1b84 = *(undefined4 *)(iVar2 + 0x48);
    }
    FUN_004b1ab0(iVar2 + 0x18,2);
  }
  return;
}

