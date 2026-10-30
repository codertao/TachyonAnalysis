
void FUN_004101c0(undefined4 param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  if ((DAT_00533ad4 & 0x80000000) == 0) {
    puVar2 = &DAT_00533ad4;
    do {
      if (puVar2[-1] == param_2) {
        puVar2[-3] = param_1;
      }
      puVar1 = puVar2 + 0xe;
      puVar2 = puVar2 + 0xe;
    } while ((*puVar1 & 0x80000000) == 0);
  }
  return;
}

