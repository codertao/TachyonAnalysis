
/* sweep */

void LoadoutStat_Animate(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  
  if (DAT_0054f898 != '\0') {
    pfVar3 = (float *)&DAT_0054f920;
    do {
      if (pfVar3[3] == 0.0) {
        pfVar3[1] = *pfVar3;
      }
      else {
        fVar2 = pfVar3[1];
        pfVar3[1] = pfVar3[2] + fVar2;
        if (*pfVar3 < pfVar3[2] + fVar2) {
          pfVar3[1] = *pfVar3;
        }
      }
      pfVar1 = pfVar3 + 9;
      pfVar3 = pfVar3 + 0x2b;
    } while (*(char *)pfVar1 != '\0');
  }
  return;
}

