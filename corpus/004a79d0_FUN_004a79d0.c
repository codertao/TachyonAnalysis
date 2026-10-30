
undefined4 *
FUN_004a79d0(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_5 == 0) {
    param_5 = 0x10000;
  }
  _AIL_init_sample_4(*param_1);
  _AIL_set_sample_volume_8(*param_1,param_1[1] * (param_4 >> 1) >> 8);
  uVar1 = FUN_004a7980(param_3);
  _AIL_set_sample_pan_8(*param_1,uVar1);
  if (*param_2 == DAT_0055e4a4) {
    _AIL_set_sample_type_12(*param_1,0,0);
    _AIL_set_sample_playback_rate_8
              (*param_1,(uint)((longlong)param_5 * 0x5622) >> 0x10 |
                        (int)((ulonglong)((longlong)param_5 * 0x5622) >> 0x20) << 0x10);
    _AIL_set_sample_address_12(*param_1,param_2 + 4,param_2[1]);
    _AIL_start_sample_4(*param_1);
    param_1[2] = param_2;
    return param_1;
  }
  _AIL_set_sample_file_12(*param_1,param_2,0);
  iVar2 = _AIL_sample_playback_rate_4(*param_1);
  _AIL_set_sample_playback_rate_8
            (*param_1,(uint)((longlong)iVar2 * (longlong)param_5) >> 0x10 |
                      (int)((ulonglong)((longlong)iVar2 * (longlong)param_5) >> 0x20) << 0x10);
  _AIL_start_sample_4(*param_1);
  param_1[2] = param_2;
  return param_1;
}

