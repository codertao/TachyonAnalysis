
void FUN_00460300(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = FUN_0045d680(*param_1,*(undefined4 *)(DAT_0058b064 + 100));
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x58);
    if (pcVar1 != (code *)0x0) {
      iVar3 = (*pcVar1)(iVar2,5,0);
      if (0 < iVar3) {
        FUN_00455b90(iVar3);
      }
    }
    iVar3 = FUN_00405d60(iVar2);
    if (iVar3 != 0) {
      uStack_4 = *(undefined4 *)(iVar3 + 0x20);
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 7;
      uStack_c = 0;
      uStack_8 = 1;
      Mission_PostEvent(&uStack_18,*(undefined4 *)(DAT_0058b064 + 100));
    }
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x34);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2,0xd,0);
    }
  }
  return;
}

