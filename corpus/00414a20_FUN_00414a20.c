
void FUN_00414a20(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_00457f50(DAT_005b3a24);
    str_sprintf(&DAT_005b9224,s_TO__s_00534238,uVar1);
  }
  else {
    if (param_1 == 1) {
      str_sprintf(&DAT_005b9224,s_TO__s_00534238,&DAT_005b3a38 + DAT_005b9220 * 0x44);
      return;
    }
    if (param_1 == 2) {
      str_sprintf(&DAT_005b9224,s_TO_ELEMENT_00534240);
      return;
    }
  }
  return;
}

