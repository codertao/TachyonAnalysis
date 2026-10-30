
void FUN_004ad2b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  if (DAT_00564ae4 != 0) {
    FUN_004aee60(param_1,0x80,0x80,0x80,0x80);
    iVar1 = param_3;
    if (0x80 < param_3) {
      iVar1 = param_3 * 4 + -0x180;
    }
    iVar2 = 0;
    iVar3 = (param_2 + -0x100) * iVar1;
    do {
      param_1 = (iVar3 >> 7) + 0x80;
      if (param_1 < 0) {
        param_1 = 0;
      }
      else if (0xff < param_1) {
        param_1 = 0xff;
      }
      local_8 = param_1;
      local_4 = param_1;
      FUN_004aef50(&param_1,&local_4,&local_8);
      (&DAT_005649e4)[iVar2] = (undefined1)param_1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + iVar1;
    } while (iVar2 < 0x100);
    (*DAT_0060451c)(0x1002,&DAT_005649e4,0);
  }
  return;
}

