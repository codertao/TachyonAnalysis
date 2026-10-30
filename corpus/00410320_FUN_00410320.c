
void FUN_00410320(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  if ((DAT_00533ad4 & 0x80000000) == 0) {
    puVar2 = &DAT_00533af8;
    do {
      if (puVar2[-8] == param_2) {
        if (puVar2 + -0xc == param_1) {
          *puVar2 = 1;
        }
        else if ((*(byte *)(puVar2 + -9) & 0x40) == 0) {
          *puVar2 = 0;
        }
      }
      puVar1 = puVar2 + 5;
      puVar2 = puVar2 + 0xe;
    } while ((*puVar1 & 0x80000000) == 0);
  }
  return;
}

