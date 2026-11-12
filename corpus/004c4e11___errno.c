
/* CRT */

int __errno(void)

{
  int iVar1;
  
  iVar1 = __getptd();
  return iVar1 + 8;
}

