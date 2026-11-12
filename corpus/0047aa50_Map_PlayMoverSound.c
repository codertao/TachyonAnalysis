
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: lmover.wav */

void Map_PlayMoverSound(int param_1,int param_2,float param_3,int param_4)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = &DAT_00571d80;
  uVar3 = 0;
  while ((piVar2[8] != param_4 || (*piVar2 == 0))) {
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 9;
    if (0xf < uVar3) {
      Voice_Play(s_lmover_wav_005525e0,(GLBL_spacesav[0x54] * 3 & 0xfffffffU) >> 4);
      piVar2 = &DAT_00571d80;
      uVar3 = 0;
      do {
        if (*piVar2 == 0) {
          fVar1 = param_3 * _DAT_0052ec4c;
          piVar2[2] = param_1;
          piVar2[6] = (int)fVar1;
          *piVar2 = 1;
          piVar2[3] = param_2;
          piVar2[4] = (int)param_3;
          piVar2[5] = 0;
          piVar2[8] = param_4;
          return;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 9;
      } while (uVar3 < 0x10);
      return;
    }
  }
  return;
}

