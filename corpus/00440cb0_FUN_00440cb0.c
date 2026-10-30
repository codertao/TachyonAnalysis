
void FUN_00440cb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_005a4b48 + 0xd0);
  iVar2 = DAT_005a4b48;
  if (DAT_005a4b48 != param_1) {
    while (iVar1 = iVar3, iVar1 != 0) {
      if (iVar1 == param_1) goto LAB_00440ce3;
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 0xd0);
    }
    if (param_1 != 0) goto LAB_00440d03;
LAB_00440ce3:
    *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(iVar1 + 0xd0);
    iVar3 = DAT_005a4b48;
  }
  DAT_005a4b48 = iVar3;
  FUN_0049c530(param_1);
  DAT_005a4b4c = DAT_005a4b4c + -1;
LAB_00440d03:
  if (DAT_005a4b4c < 1) {
    DAT_005a4b48 = 0;
  }
  return;
}

