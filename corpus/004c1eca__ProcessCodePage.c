
/* CRT: getqloc */

void _ProcessCodePage(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_c [8];
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,(char *)&PTR_NotCode_504341_0052f808), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    iVar1 = _strcmp(param_1,(char *)&PTR_NotCode_50434f_0052f804);
    if (iVar1 != 0) goto LAB_004c1f26;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_00565194)(DAT_00565190,uVar2,local_c,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_c;
LAB_004c1f26:
  _atol(param_1);
  return;
}

