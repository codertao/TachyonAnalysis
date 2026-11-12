
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

undefined4
Snd_PlayAtPosEx(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
               undefined4 param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  
  Snd_CalcAttenuation(param_4 + 0x34,&DAT_005b9600,param_5);
  DAT_00563588 = DAT_00563588 * param_6 >> 8;
  if (1 < param_7) {
    _DAT_005635aa = (undefined2)param_2;
    DAT_00563590 = DAT_00563590 | 4;
    _DAT_005635a8 = (undefined2)param_1;
    _DAT_005635ac = (undefined2)param_3;
    _DAT_0056359c = GLBL_spacesav[0x54];
    DAT_00563588 = Snd_ScaleVolume(DAT_00563588);
    _DAT_00563598 = Snd_IsMuted();
    DelaySnd_Queue(&DAT_00563580,param_7);
    return 0;
  }
  uVar1 = Snd_PlaySample(param_1,param_2,param_3);
  return uVar1;
}

