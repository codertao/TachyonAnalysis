
/* returns body ptr (node+0x28) */

int NetCli_AllocEvent(void)

{
  void *pvVar1;
  
  pvVar1 = Pool_Alloc((Pool *)&DAT_006af5e4);
  if (pvVar1 != (void *)0x0) {
    return (int)pvVar1 + 0x28;
  }
  return 0;
}

