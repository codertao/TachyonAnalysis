
void FUN_0042de00(void)

{
  int iVar1;
  
  if ((DAT_005b11c0 != 0) && (DAT_005b11c0 = DAT_005b11c0 + -1, DAT_005b11c0 == 0)) {
    FUN_00427c70();
  }
  iVar1 = DAT_005b01d4;
  if ((DAT_005b11b8 == 0) && (DAT_005b01d4 != 0)) {
    if (*(int *)(DAT_005b01d4 + 0xb0) != 0) {
      *(int *)(DAT_005b01d4 + 0xb0) = *(int *)(DAT_005b01d4 + 0xb0) + -1;
      return;
    }
    FUN_00427c90(DAT_005b01d4 + 0x1c);
    FUN_004b7930(iVar1,&DAT_005b01d4);
    FUN_004b78a0(&DAT_005b01ac,iVar1);
    DAT_005b11c0 = 0xfa;
  }
  return;
}

