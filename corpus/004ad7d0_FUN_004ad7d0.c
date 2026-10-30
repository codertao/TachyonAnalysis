
void FUN_004ad7d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_00564ae4 != 0) {
    (*DAT_0060451c)(0xd);
  }
  if (DAT_0060458c == param_1) {
    DAT_0060458c = *(int *)(param_1 + 0x714);
  }
  else {
    iVar3 = *(int *)(DAT_0060458c + 0x714);
    iVar2 = DAT_0060458c;
    while (iVar1 = iVar3, iVar1 != param_1) {
      if (iVar1 == 0) goto LAB_004ad837;
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 0x714);
    }
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x714) != param_1)) goto LAB_004ad837;
    *(undefined4 *)(iVar2 + 0x714) = *(undefined4 *)(param_1 + 0x714);
  }
  DAT_006046a8 = DAT_006046a8 + -1;
LAB_004ad837:
  if (*(int *)(param_1 + 0x708) != 0) {
    FUN_0049c530(*(int *)(param_1 + 0x708));
  }
  if (*(int *)(param_1 + 0x70c) != 0) {
    FUN_0049c530(*(int *)(param_1 + 0x70c));
  }
  if (*(int *)(param_1 + 0x710) != 0) {
    FUN_0049c530(*(int *)(param_1 + 0x710));
  }
  if (*(int *)(param_1 + 0x700) != 0) {
    FUN_0049c530(*(int *)(param_1 + 0x700));
  }
  if (*(int *)(param_1 + 0x704) != 0) {
    FUN_0049c530(*(undefined4 *)(param_1 + 0x700));
  }
  FUN_0049c530(param_1);
  return;
}

