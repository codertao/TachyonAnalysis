
/* CRT */

void ___lc_lctostr(undefined4 param_1,int param_2)

{
  _strcpy(param_1,param_2);
  if (*(char *)(param_2 + 0x40) != '\0') {
    __strcats(param_1,2,&DAT_0053fec0,param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    __strcats(param_1,2,&DAT_00548004,param_2 + 0x80);
  }
  return;
}

