
void FUN_004b2a80(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    iVar1 = FUN_004b1cd0(*(int *)(param_1 + 0x40));
    if (param_3 < *(uint *)(iVar1 + 4)) {
      iVar1 = iVar1 + 0xc + param_3 * 0x2c;
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & ~param_2;
    }
  }
  return;
}

