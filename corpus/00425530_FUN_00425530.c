
void FUN_00425530(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  iVar2 = DAT_005b1ddc;
  puVar1 = (undefined4 *)(DAT_005b1ddc + 8);
  if (*(int *)(DAT_005b1ddc + 0x20) == 0) {
    if (param_1 < 0) {
      iVar4 = **(int **)(DAT_005b1ddc + 8) + -1;
      if (*(int *)(DAT_005b1ddc + 0xc) <= iVar4) goto LAB_0042556f;
      *(undefined4 *)*puVar1 = *(undefined4 *)(DAT_005b1ddc + 0x10);
    }
    else {
      iVar4 = **(int **)(DAT_005b1ddc + 8) + 1;
      if (*(int *)(DAT_005b1ddc + 0x10) < iVar4) {
        *(undefined4 *)*puVar1 = *(undefined4 *)(DAT_005b1ddc + 0xc);
      }
      else {
LAB_0042556f:
        *(int *)*puVar1 = iVar4;
      }
    }
    pcVar3 = *(code **)(iVar2 + 0x1c);
    if (pcVar3 == (code *)0x0) goto LAB_00425592;
    param_1 = *(int *)*puVar1;
  }
  else {
    pcVar3 = *(code **)(DAT_005b1ddc + 0x1c);
    if (pcVar3 == (code *)0x0) goto LAB_00425592;
  }
  (*pcVar3)(param_1);
LAB_00425592:
  FUN_00466590(1,0xb,0,0xff);
  return;
}

