
void FUN_0042bcf0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_005b11c4 != 0) {
    puVar1 = &DAT_005b11d0;
    do {
      (*(code *)(&PTR_FUN_005365ac)[puVar1[-1]])(puVar1[-2],*puVar1);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 3;
    } while (uVar2 < DAT_005b11c4);
    DAT_005b11c4 = 0;
    return;
  }
  DAT_005b11c4 = 0;
  return;
}

