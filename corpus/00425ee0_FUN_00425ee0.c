
void FUN_00425ee0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_004b19f0(param_1 + 0x18);
  if (0xfff < *(int *)(param_1 + 0xd8)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xd8) + 0xd8);
    if (0x1000 < iVar1) {
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      iVar1 = *(int *)(*(int *)(param_1 + 0xd8) + 0xd8);
      uVar2 = *(undefined4 *)(iVar1 + 0x34);
      uVar3 = *(undefined4 *)(iVar1 + 0x38);
      uVar4 = *(undefined4 *)(iVar1 + 0x3c);
      clr_bytes((undefined4 *)(iVar1 + 0x34),0xc);
      FUN_00425d10(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xd8));
      iVar1 = *(int *)(*(int *)(param_1 + 0xd8) + 0xd8);
      *(undefined4 *)(iVar1 + 0x34) = uVar2;
      *(undefined4 *)(iVar1 + 0x38) = uVar3;
      *(undefined4 *)(iVar1 + 0x3c) = uVar4;
    }
    iVar1 = *(int *)(param_1 + 0xd8);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0xd8);
    uVar2 = *(undefined4 *)(iVar1 + 0x34);
    uVar3 = *(undefined4 *)(iVar1 + 0x38);
    uVar4 = *(undefined4 *)(iVar1 + 0x3c);
    clr_bytes((undefined4 *)(iVar1 + 0x34),0xc);
    FUN_00425d60(*(undefined4 *)(param_1 + 0xd8),0);
    iVar1 = *(int *)(param_1 + 0xd8);
    *(undefined4 *)(iVar1 + 0x34) = uVar2;
    *(undefined4 *)(iVar1 + 0x38) = uVar3;
    *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  }
  return;
}

