
void FUN_004297e0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     ((pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x5c), pcVar1 == (code *)0x0 ||
      (iVar2 = (*pcVar1)(param_1), iVar2 != 0)))) {
    FUN_0048e440((int *)(param_1 + 0x34),DAT_005b3300 + 0x34);
    iStack_c = *(int *)(param_1 + 0x34) - *(int *)(DAT_005b3300 + 0x34);
    iStack_8 = *(int *)(param_1 + 0x38) - *(int *)(DAT_005b3300 + 0x38);
    iStack_4 = *(int *)(param_1 + 0x3c) - *(int *)(DAT_005b3300 + 0x3c);
    FUN_004b2410(&iStack_c,&iStack_c);
    pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x74);
    if (pcVar1 == (code *)0x0) {
      uVar3 = FUN_00429750(*(undefined1 *)(param_1 + 0xc2));
    }
    else {
      uVar3 = (*pcVar1)(param_1,0);
    }
    bVar4 = param_1 == *(int *)(DAT_005b3300 + 0x90);
    if (-1 < iStack_4) {
      FUN_004296d0(&iStack_c,&uStack_14);
      FUN_004292f0(uStack_14,uStack_10,uVar3,bVar4);
      return;
    }
    iStack_4 = -iStack_4;
    FUN_004296d0(&iStack_c,&uStack_14);
    FUN_004294c0(uStack_14,uStack_10,uVar3,bVar4);
  }
  return;
}

