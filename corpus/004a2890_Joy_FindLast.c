
/* sweep: guess */

void Joy_FindLast(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  for (puVar1 = DAT_005640c4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    if (((*(byte *)(puVar1 + 0xe) & 1) != 0) &&
       ((puVar2 == (undefined4 *)0x0 || ((*(byte *)(puVar2 + 0xe) & 1) == 0)))) {
      puVar2 = puVar1;
    }
  }
  return;
}

