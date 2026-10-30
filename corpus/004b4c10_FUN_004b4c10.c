
void FUN_004b4c10(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (0xff < param_3) {
    param_3 = 0xff;
  }
  FUN_004b9e90(param_3,0xff,0xff,0xff);
  uVar3 = 0;
  if (*param_2 * 3 != 0) {
    do {
      iVar2 = (uint)*(ushort *)(param_2[3] + uVar3 * 2) * 0x30;
      local_c = (int)(longlong)ROUND(*(float *)(iVar2 + 8 + *(int *)(param_1 + 0x40)));
      if (DAT_00668fc8 == 0) {
        iVar1 = 0xff;
      }
      else {
        iVar1 = 0xff;
        if (DAT_00668fbc < local_c) {
          if (DAT_00668fb4 - local_c < 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = (int)((ulonglong)
                          ((longlong)((DAT_00668fb4 - local_c) * 4) * (longlong)DAT_00668fc4) >>
                         0x20);
            if (0xff < iVar1) {
              iVar1 = 0xff;
            }
          }
        }
      }
      *(int *)(iVar2 + *(int *)(param_1 + 0x40) + 0x14) =
           *(int *)(&DAT_0060f880 + (iVar1 + param_3) * 4) + -0x1000000;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*param_2 * 3));
  }
  return;
}

