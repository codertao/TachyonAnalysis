
/* sweep */

int Mss_LoadSample(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = load_a_file_probably(param_1);
  if (iVar1 != 0) {
    iVar2 = Mss_DecodeSample(iVar1);
    if (iVar2 != iVar1) {
      OurFreeMem(iVar1);
    }
    return iVar2;
  }
  return 0;
}

