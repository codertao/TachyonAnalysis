
void FUN_00416b20(void)

{
  if (*(code **)(DAT_005b1dc4 + 0x8c) != (code *)0x0) {
    (**(code **)(DAT_005b1dc4 + 0x8c))();
    DAT_005b9058 = 1;
    return;
  }
  FUN_00415aa0();
  FUN_00450770(s_ttfmusic_005342d8,s_ttf_music_005342e4);
  DAT_005b9058 = 1;
  return;
}

