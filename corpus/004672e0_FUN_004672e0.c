
void FUN_004672e0(int param_1)

{
  int iVar1;
  
  *(int *)(DAT_005b9084 + 0xc0) = *(int *)(DAT_005b9084 + 0xc0) + param_1;
  if (*(int *)(DAT_005b9084 + 0xc0) < 4) {
    *(undefined4 *)(DAT_005b9084 + 0xc0) = 4;
  }
  else if (0x7c < *(int *)(DAT_005b9084 + 0xc0)) {
    *(undefined4 *)(DAT_005b9084 + 0xc0) = 0x7c;
  }
  iVar1 = DAT_005b9084;
  FUN_00431c40(*(undefined4 *)(DAT_005b9084 + 0xac),*(undefined4 *)(DAT_005b9084 + 0xb0),
               *(undefined4 *)(DAT_005b9084 + 0xb4),*(undefined4 *)(DAT_005b9084 + 0xb8),
               *(undefined4 *)(DAT_005b9084 + 0xbc));
  FUN_00431c80(&DAT_005ac548);
  FUN_00431c80(&DAT_005a7538);
  FUN_00431c80(&DAT_005a9d40);
  FUN_004af290(*(undefined4 *)(iVar1 + 0xc0));
  FUN_004acfa0();
  return;
}

