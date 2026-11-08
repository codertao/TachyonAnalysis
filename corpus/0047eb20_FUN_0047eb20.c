
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047eb20(void)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  FUN_0048d270();
  piVar3 = DAT_005636a4;
  _DAT_005636a8 = FUN_0049e9c0(DAT_00571288);
  if ((_DAT_005636a8 == 0) && (piVar3 != (int *)0x0)) {
    while (piVar3[3] != 0) {
      piVar3 = (int *)piVar3[8];
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
    piVar3[3] = 1;
    if (piVar3[6] == 0) {
      pcVar1 = _strstr((char *)(*piVar3 + 0x70),&DAT_0053ebdc);
      if (pcVar1 == (char *)0x0) {
        str_sprintf(&DAT_005a41e0,*piVar3 + 0x70);
      }
      else {
        str_sprintf(&DAT_005a41e0,*piVar3 + 0x70,(int)(char)piVar3[5]);
      }
      iVar2 = FUN_0049e850(&DAT_005a41e0);
      piVar3[6] = iVar2;
    }
    DAT_00571288 = FUN_0049e8d0(piVar3[6],0,
                                (int)(((longlong)piVar3[7] * (longlong)GLBL_spacesav[0x55] &
                                      0xffffffffU) / 0xff),0);
    piVar3[4] = DAT_00571288;
  }
  return;
}

