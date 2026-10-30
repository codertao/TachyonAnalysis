
int FUN_004c1fe7(uint param_1,LCTYPE param_2,char *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined **_Source;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0x1a;
  do {
    iVar2 = (iVar3 + iVar4) / 2;
    uVar1 = *(uint *)(iVar2 * 0x2c + 0x561a10);
    if (param_1 == uVar1) {
      if (param_2 == 1) {
        _Source = (undefined **)(&DAT_00561a14 + iVar2 * 0x2c);
      }
      else if (param_2 == 3) {
        _Source = &PTR_DAT_00561a20 + iVar2 * 0xb;
      }
      else if (param_2 == 7) {
        _Source = &PTR_DAT_00561a28 + iVar2 * 0xb;
      }
      else if (param_2 == 0xb) {
        _Source = (undefined **)(&DAT_00561a2c + iVar2 * 0x2c);
      }
      else if (param_2 == 0x1001) {
        _Source = *(undefined ***)(iVar2 * 0x2c + 0x561a1c);
      }
      else if (param_2 == 0x1002) {
        _Source = *(undefined ***)(iVar2 * 0x2c + 0x561a24);
      }
      else {
        if (param_2 != 0x1004) break;
        _Source = (undefined **)(&DAT_00561a34 + iVar2 * 0x2c);
      }
      if ((_Source != (undefined **)0x0) && (0 < param_4)) {
        _strncpy(param_3,(char *)_Source,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      break;
    }
    if (param_1 < uVar1) {
      iVar3 = iVar2 + -1;
    }
    else {
      iVar4 = iVar2 + 1;
    }
  } while (iVar4 <= iVar3);
  iVar3 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  return iVar3;
}

