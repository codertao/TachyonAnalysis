
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

undefined4 CdAudio_Open(undefined4 param_1,uint *param_2,uint *param_3,uint *param_4)

{
  MCIERROR MVar1;
  
  if (DAT_005648e8 == 0) {
    return 0;
  }
  _DAT_005b9cc0 = 0;
  DAT_005b9cc4 = 0;
  _DAT_005b9cc8 = 1;
  _DAT_005b9ccc = param_1;
  MVar1 = mciSendCommandA(DAT_005b9cd4,0x814,0x110,0x5b9cc0);
  if (MVar1 != 0) {
    return 0;
  }
  *param_2 = DAT_005b9cc4 & 0xff;
  *param_3 = DAT_005b9cc4 >> 8 & 0xff;
  *param_4 = DAT_005b9cc4 >> 0x10 & 0xff;
  return 1;
}

