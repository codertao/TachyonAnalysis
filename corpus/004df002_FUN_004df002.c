
int FUN_004df002(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = in_EAX + *(int *)(in_EAX + 4) + 0x10;
  DAT_004cb474 = 0;
  piVar3 = &DAT_004c9402;
  iVar2 = 0x18;
  do {
    if (((char)piVar3[0xf] != '\0') && (*piVar3 == iVar1)) {
      DAT_004cb474 = DAT_004cb474 + 1;
    }
    piVar3 = piVar3 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = &DAT_004c9a02;
  iVar2 = 0x18;
  do {
    if (((char)piVar3[0xf] != '\0') && (*piVar3 == iVar1)) {
      DAT_004cb474 = DAT_004cb474 + 1;
    }
    piVar3 = piVar3 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return DAT_004cb474;
}

