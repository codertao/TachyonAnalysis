
void FUN_0040ab80(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x80) == 0) {
      iVar2 = FUN_0049d570(iVar1 + 0x40,&DAT_005a61e0);
      *(int *)(iVar1 + 0x80) = iVar2;
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_00466160(param_1,*(undefined4 *)(iVar1 + 0x80),*(undefined4 *)(iVar1 + 0x90),0,
                 *(undefined4 *)(iVar1 + 0x88),0xff,*(undefined4 *)(iVar1 + 0x8c));
  }
  return;
}

