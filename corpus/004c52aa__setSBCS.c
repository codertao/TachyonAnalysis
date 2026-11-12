
/* CRT */

void _setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_006c9c60;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_006c9b48 = 0;
  DAT_006c9b5c = 0;
  DAT_006c9d64 = 0;
  DAT_006c9b50 = 0;
  DAT_006c9b54 = 0;
  DAT_006c9b58 = 0;
  return;
}

