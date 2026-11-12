
/* sweep */

void Teletype_GetScrollRange(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 * 0x170;
  iVar1 = *(int *)(&DAT_0056acec + param_1) - *(int *)(&DAT_0056ace8 + param_1);
  param_2 = *(int *)(&DAT_0056acf8 + param_1) + param_2;
  *(int *)(&DAT_0056acf8 + param_1) = param_2;
  if ((param_2 < 0) || (iVar1 < 1)) {
    *(undefined4 *)(&DAT_0056acf8 + param_1) = 0;
  }
  else if (iVar1 < param_2) {
    *(int *)(&DAT_0056acf8 + param_1) = iVar1;
    return;
  }
  return;
}

