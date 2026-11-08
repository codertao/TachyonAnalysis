
void FUN_0047ebf0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_00589734 != 0) {
    piVar1 = (int *)(DAT_00589738 + 0xe8);
    iVar2 = DAT_00589734;
    do {
      if ((piVar1 != (int *)0xe8) && (piVar1[5] != 0)) {
        iVar4 = *piVar1;
        if (iVar4 != 0) {
          puVar3 = (undefined4 *)(piVar1[1] + 0x10c);
          do {
            FUN_0046d580(&GLBL_UI_ELEM_LIST,puVar3 + -8,puVar3[2],*puVar3,puVar3[1],0);
            puVar3 = puVar3 + 0x4a;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      piVar1 = piVar1 + 0x40;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

