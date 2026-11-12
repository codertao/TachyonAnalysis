
/* sweep */

void Gfx_InitColorTable(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  if (PTR_DAT_0053ee08 != (undefined *)0x0) {
    puVar2 = &DAT_0053ee14;
    puVar1 = PTR_DAT_0053ee08;
    do {
      *puVar1 = *(undefined1 *)(puVar2 + -2);
      Gfx_DefineColor(puVar2[-2],puVar2[-1],*puVar2,puVar2[1]);
      puVar1 = (undefined1 *)puVar2[2];
      puVar2 = puVar2 + 5;
    } while (puVar1 != (undefined1 *)0x0);
  }
  return;
}

