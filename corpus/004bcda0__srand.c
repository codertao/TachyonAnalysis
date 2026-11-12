
/* CRT */

void _srand(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = __getptd();
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  return;
}

