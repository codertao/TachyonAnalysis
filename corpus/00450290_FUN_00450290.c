
void FUN_00450290(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00455e60(param_1 + 0x11c,*(int *)(param_1 + 0x8c) + 0xd0,
                       *(undefined4 *)(param_1 + 0xfc));
  iVar2 = iVar1 - *(int *)(param_1 + 0x140);
  if (iVar1 >> 10 < iVar2) {
    iVar2 = iVar1 >> 10;
  }
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + iVar2;
  FUN_00437870(param_1,0);
  return;
}

