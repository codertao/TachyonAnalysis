
/* sweep */

void Snd_PlayAtEnt(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  undefined4 param_5)

{
  Snd_CalcAttenuation(param_4 + 0x34,&DAT_005b9600,param_5);
  Snd_PlaySample(param_1,param_2,param_3);
  return;
}

