
void FUN_004a8930(uint param_1)

{
  if ((GLBL_audio_running != 0) && (DAT_005b9d24 != (int *)0x0)) {
    if (0xff < param_1) {
      param_1 = 0xff;
    }
    (**(code **)(*DAT_005b9d24 + 0x3c))(DAT_005b9d24,(int)((param_1 * 5 + -0x4fb) * 2000) / 0xff);
  }
  return;
}

