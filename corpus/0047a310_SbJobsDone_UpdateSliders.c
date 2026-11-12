
/* sweep */

void SbJobsDone_UpdateSliders(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  int local_4;
  
  piVar3 = &DAT_005520e0;
  iVar2 = DAT_005520e0;
  while (iVar2 != -1) {
    if (((*piVar3 == 0) && (Teletype_GetSliderInfo(0,&local_4,&local_8,&local_c), local_8 < local_c)
        ) && (iVar2 = Teletype_GetScroll(0), iVar2 != 0)) {
      piVar3[0xd] = local_4;
      piVar3[0xe] = local_c;
      piVar3[0xf] = local_8;
      Slider_Draw(piVar3);
    }
    piVar1 = piVar3 + 0x10;
    piVar3 = piVar3 + 0x10;
    iVar2 = *piVar1;
  }
  Slider_HandleMouse(&DAT_005520e0);
  return;
}

