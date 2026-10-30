
void FUN_0044d300(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_00591740;
  puVar3 = &DAT_00591300;
  if (DAT_00564ae4 != 0) {
    if (DAT_0059124c != 0) {
      FUN_004ad7d0(DAT_0059124c);
      DAT_0059124c = 0;
    }
    if (param_1 != 0) {
      iVar2 = 0x100;
      do {
        uVar1 = *puVar4;
        *puVar3 = (char)uVar1;
        puVar3[1] = (char)((uint)uVar1 >> 8);
        puVar3[2] = (char)((uint)uVar1 >> 0x10);
        puVar3 = puVar3 + 3;
        puVar4 = puVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_0059124c = FUN_004ad610(&DAT_00591300);
      if (DAT_0059124c != 0) {
        FUN_004ad900(DAT_0059124c,0x80,0x80,0x80,0x80,0x80);
      }
    }
  }
  return;
}

