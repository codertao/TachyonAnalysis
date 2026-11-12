
/* sweep */

void SbWing_UpdateSliders(void)

{
  int iVar1;
  int *piVar2;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = &DAT_00558ce8;
  iVar1 = DAT_00558ce8;
  do {
    if (iVar1 == -1) {
      Slider_HandleMouse(&DAT_00558ce8);
      return;
    }
    if (*piVar2 == 0) {
      Teletype_GetSliderInfo(0,&local_4,&local_8,&local_c);
      if ((local_8 < local_c) && (iVar1 = Teletype_GetScroll(0), iVar1 != 0)) goto LAB_0048a916;
    }
    else if ((*piVar2 == 1) &&
            (local_8 = 6, local_c = DAT_00563e2c, local_4 = DAT_00563e30,
            DAT_00563e2c != 6 && -1 < DAT_00563e2c + -6)) {
LAB_0048a916:
      piVar2[0xd] = local_4;
      piVar2[0xe] = local_c;
      piVar2[0xf] = local_8;
      Slider_Draw(piVar2);
    }
    iVar1 = piVar2[0x10];
    piVar2 = piVar2 + 0x10;
  } while( true );
}

