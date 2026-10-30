
void FUN_0047a500(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x100);
  while (param_2 < uVar1) {
    FUN_0047a4b0(param_1);
    uVar1 = *(uint *)(param_1 + 0x100);
  }
  return;
}

