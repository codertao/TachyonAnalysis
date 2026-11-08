
void FUN_004ad120(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (GLBL_some_str != 0) {
    puVar1 = (uint *)(DAT_00604490 * DAT_00604464 + GLBL_some_str);
    iVar3 = DAT_0060446c - DAT_00604464;
    if (0 < iVar3) {
      uVar2 = (DAT_0060f864 << 8 | DAT_0060f868) << 8 | DAT_0060f86c;
      uVar4 = 0;
      if (DAT_00604448 * iVar3 != 0) {
        do {
          *puVar1 = uVar2;
          uVar4 = uVar4 + 1;
          puVar1 = puVar1 + 1;
        } while (uVar4 < (uint)(DAT_00604448 * iVar3));
      }
    }
  }
  return;
}

