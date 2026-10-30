
void FUN_004a2460(void)

{
  int iVar1;
  UINT UVar2;
  int iVar3;
  undefined1 local_200 [512];
  
  FUN_004a2500();
  if (DAT_005640d4 != (int *)0x0) {
    (**(code **)(*DAT_005640d4 + 0x10))(DAT_005640d4,4,&LAB_004a1af0,0,0);
    return;
  }
  UVar2 = joyGetNumDevs();
  if ((UVar2 != 0) && (iVar3 = 0, 0 < (int)UVar2)) {
    do {
      iVar1 = iVar3 + 1;
      str_sprintf(local_200,&DAT_0055e0d4,iVar1);
      iVar3 = FUN_004a1ef0(2,local_200,local_200,0,0,iVar3);
      if (iVar3 == 0) {
        return;
      }
      if ((*(byte *)(iVar3 + 0x38) & 1) == 0) {
        FUN_004a23e0(iVar3);
      }
      iVar3 = iVar1;
    } while (iVar1 < (int)UVar2);
  }
  return;
}

