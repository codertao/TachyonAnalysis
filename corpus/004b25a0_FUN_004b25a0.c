
uint FUN_004b25a0(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1[3];
    uVar3 = FUN_004b2580();
    lVar2 = (longlong)(int)uVar1 * (longlong)(int)(uVar3 & 0xffff);
    return param_1[1] + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  if ((uVar1 & 2) != 0) {
    return param_1[(DAT_006691e0 & 1) + 1];
  }
  if ((uVar1 & 4) != 0) {
    return param_1[1] +
           ((uint)((longlong)(int)param_1[3] *
                  (longlong)*(int *)(&DAT_0052bfe0 + (param_1[4] * DAT_00668fdc >> 0x10 & 0xff) * 4)
                  ) >> 0x10 |
           (int)((ulonglong)
                 ((longlong)(int)param_1[3] *
                 (longlong)*(int *)(&DAT_0052bfe0 + (param_1[4] * DAT_00668fdc >> 0x10 & 0xff) * 4))
                >> 0x20) << 0x10);
  }
  return param_1[2];
}

