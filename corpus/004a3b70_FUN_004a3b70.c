
void FUN_004a3b70(undefined4 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  
  FUN_004a3ad0();
  if (0 < param_3) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      *param_1 = *(undefined4 *)(&DAT_00602a00 + (uint)bVar1 * 4);
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

