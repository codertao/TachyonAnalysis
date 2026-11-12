
/* sweep */

int Snd_LoadWaveFile(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = load_a_file_probably(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = Snd_LoadWaveFromMem(iVar1);
  if (iVar2 != iVar1) {
    OurFreeMem(iVar1);
    return iVar2;
  }
  return iVar1;
}

