
/* sweep */

void SbJobs_UpdateSliders(void)

{
  int iVar1;
  int *piVar2;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = &DAT_00552020;
  iVar1 = DAT_00552020;
  do {
    if (iVar1 == -1) {
      Slider_HandleMouse(&DAT_00552020);
      return;
    }
    if (*piVar2 == 0) {
      Teletype_GetSliderInfo(0,&local_4,&local_8,&local_c);
      if ((local_8 < local_c) && (iVar1 = Teletype_GetScroll(0), iVar1 != 0)) goto LAB_00479866;
    }
    else if ((*piVar2 == 1) &&
            (local_8 = 3, local_c = DAT_0058972c, local_4 = DAT_00563648,
            DAT_0058972c != 3 && -1 < DAT_0058972c + -3)) {
LAB_00479866:
      piVar2[0xd] = local_4;
      piVar2[0xe] = local_c;
      piVar2[0xf] = local_8;
      Slider_Draw(piVar2);
    }
    iVar1 = piVar2[0x10];
    piVar2 = piVar2 + 0x10;
  } while( true );
}

