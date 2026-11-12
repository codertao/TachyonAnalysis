
/* sweep */

void SbNews_UpdateSliders(void)

{
  int iVar1;
  int *piVar2;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = &DAT_00552bb8;
  iVar1 = DAT_00552bb8;
  do {
    if (iVar1 == -1) {
      Slider_HandleMouse(&DAT_00552bb8);
      return;
    }
    if (*piVar2 == 0) {
      Teletype_GetSliderInfo(0,&local_4,&local_8,&local_c);
      if ((local_8 < local_c) && (iVar1 = Teletype_GetScroll(0), iVar1 != 0)) goto LAB_0047f966;
    }
    else if ((*piVar2 == 1) &&
            (local_8 = 4, local_c = DAT_005636b8, local_4 = DAT_005636b0,
            DAT_005636b8 != 4 && -1 < DAT_005636b8 + -4)) {
LAB_0047f966:
      piVar2[0xd] = local_4;
      piVar2[0xe] = local_c;
      piVar2[0xf] = local_8;
      Slider_Draw(piVar2);
    }
    iVar1 = piVar2[0x10];
    piVar2 = piVar2 + 0x10;
  } while( true );
}

