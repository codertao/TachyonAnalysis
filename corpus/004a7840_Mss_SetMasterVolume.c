
/* sweep */

void Mss_SetMasterVolume(uint param_1)

{
  _AIL_set_digital_master_volume_8(DAT_00601e70,param_1 >> 1);
  return;
}

