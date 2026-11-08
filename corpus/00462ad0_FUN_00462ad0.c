
void FUN_00462ad0(void)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = timeGetTime();
  for (uVar2 = DVar1 & 0x1ff; uVar2 != 0; uVar2 = uVar2 - 1) {
    global_bad_shift_rng();
  }
  return;
}

