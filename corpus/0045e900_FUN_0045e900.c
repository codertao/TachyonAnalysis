
void FUN_0045e900(int param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0;
  if (DAT_005897e0 != 0) {
    puVar2 = (undefined2 *)(param_1 + 4);
    piVar1 = DAT_006af660;
    do {
      if (*piVar1 != 0) {
        puVar2[-2] = (short)piVar1[2];
        puVar2[-1] = *(undefined2 *)(piVar1[0x32] + 0xe0);
        *puVar2 = *(undefined2 *)(piVar1[0x32] + 0xf8);
        puVar2 = puVar2 + 3;
        iVar4 = iVar4 + 1;
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 0x82;
    } while (uVar3 < DAT_005897e0);
  }
  FUN_004bd0d6(param_1,iVar4,6,&LAB_0045e8e0);
  return;
}

