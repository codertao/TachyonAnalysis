
void FUN_0045f880(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(DAT_0058b064 + 100);
  iVar2 = FUN_0045d680(*param_1,uVar1);
  if (iVar2 != 0) {
    if (*(int *)(*(int *)(iVar2 + 0xf0) + 0x58) == 0) {
      FUN_0045f690(iVar2,uVar1);
    }
    else {
      Gate_JumpToSector();
    }
    FUN_004269b0(iVar2 + 0x34,uVar1,DAT_0058b068);
  }
  return;
}

