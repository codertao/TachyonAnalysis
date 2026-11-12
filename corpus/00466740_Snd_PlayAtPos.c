
/* sweep */

void Snd_PlayAtPos(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  Snd_CalcAttenuation(param_4,&DAT_005b9600,param_5);
  Snd_PlaySample(param_1,param_2,param_3);
  return;
}

