
/* CRT */

int ___doserrno(void)

{
  int iVar1;
  
  iVar1 = __getptd();
  return iVar1 + 0xc;
}

