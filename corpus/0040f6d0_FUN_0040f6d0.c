
void FUN_0040f6d0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_2c [24];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_8 = 0xc8000;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x58) != 0)) {
    local_8 = *(int *)(*(int *)(param_1 + 0x58) + 0x30);
  }
  DAT_005b9640 = DAT_005b9640 + (DAT_005b9644 - DAT_005b9640 >> 4);
  DAT_005b9648 = DAT_005b9648 + (DAT_005b9654 * 0x80 + DAT_005b9648 * -0x80 >> 0xb);
  DAT_005b964c = DAT_005b964c + (DAT_005b9658 * 0x80 + DAT_005b964c * -0x80 >> 0xb);
  DAT_005b9650 = DAT_005b9650 + (DAT_005b965c * 0x80 + DAT_005b9650 * -0x80 >> 0xb);
  if ((*(byte *)(DAT_005b95e0 + 0xc) & 0x10) != 0) {
    if (DAT_005b9640 < local_8) {
      DAT_005b9640 = local_8;
    }
    if (DAT_005b9644 < local_8) {
      DAT_005b9644 = local_8;
    }
  }
  local_c = DAT_005b9640;
  FUN_0052db6a(local_2c,DAT_005b9648,DAT_005b964c,DAT_005b9650);
  FUN_0052dbcd(local_2c);
  FUN_004b24d0(&local_14,&local_14);
  FUN_0052db6a(local_2c,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
  FUN_0052dbcd(local_2c);
  FUN_004b24d0(&local_14,&local_14);
  DAT_005b9688 = ((*(int *)(param_1 + 0xa0) * 7 + *(int *)(param_1 + 0x34)) - DAT_005b9600) -
                 local_14 >> 3;
  DAT_005b968c = ((*(int *)(param_1 + 0xa4) * 7 + *(int *)(param_1 + 0x38)) - DAT_005b9604) -
                 local_10 >> 3;
  DAT_005b9690 = ((*(int *)(param_1 + 0xa8) * 7 + *(int *)(param_1 + 0x3c)) - DAT_005b9608) -
                 local_c >> 3;
  uVar1 = FUN_004e046f(&DAT_005b9688);
  if (0x18000 < uVar1) {
    iVar2 = (int)(0x180000000 / (longlong)(int)uVar1);
    DAT_005b9688 = (uint)((longlong)(int)DAT_005b9688 * (longlong)iVar2) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)DAT_005b9688 * (longlong)iVar2) >> 0x20) << 0x10
    ;
    DAT_005b968c = (uint)((longlong)(int)DAT_005b968c * (longlong)iVar2) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)DAT_005b968c * (longlong)iVar2) >> 0x20) << 0x10
    ;
    DAT_005b9690 = (uint)((longlong)(int)DAT_005b9690 * (longlong)iVar2) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)DAT_005b9690 * (longlong)iVar2) >> 0x20) << 0x10
    ;
  }
  DAT_005b9604 = DAT_005b9604 + DAT_005b968c;
  DAT_005b9600 = DAT_005b9600 + DAT_005b9688;
  DAT_005b9608 = DAT_005b9608 + DAT_005b9690;
  return;
}

