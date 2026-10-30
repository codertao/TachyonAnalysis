
int FUN_004b3ab0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  piVar4 = *(int **)(iVar1 + 0x90);
  uVar2 = FUN_004b3a70(param_1);
  uVar3 = 0;
  DAT_0055eca8 = 0;
  if (*(int *)(iVar1 + 0x2c) != 0) {
    do {
      if (uVar2 <= ((uint)((longlong)*piVar4 * (longlong)DAT_00666b04) >> 0x10 |
                   (int)((ulonglong)((longlong)*piVar4 * (longlong)DAT_00666b04) >> 0x20) << 0x10))
      {
        return piVar4[1];
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
      DAT_0055eca8 = DAT_0055eca8 + 1;
    } while (uVar3 < *(uint *)(iVar1 + 0x2c));
  }
  return 0;
}

