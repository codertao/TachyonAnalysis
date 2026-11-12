
/* sweep: guess */

void Snd_PlayAtEntLoop(undefined4 param_1,int param_2,undefined4 param_3)

{
  Snd_CalcAttenuation(param_2 + 0x34,&DAT_005b9600,param_3);
  Snd_PlaySampleLoop(param_1);
  return;
}

