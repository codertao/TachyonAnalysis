
void FUN_00420e70(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005b31c0;
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    if ((*(short *)(iVar2 + 0x76) == 0x1a) && (*(int *)(iVar2 + 200) != 0)) {
      FUN_00465ff0(*(int *)(iVar2 + 200));
    }
  }
  FUN_0041b9d0(DAT_005b31c0,0x1a);
  return;
}

