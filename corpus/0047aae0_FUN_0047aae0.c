
void FUN_0047aae0(float param_1)

{
  float *pfVar1;
  int iVar2;
  
  pfVar1 = (float *)&DAT_00571d98;
  iVar2 = 0x10;
  do {
    if (((pfVar1[-5] == 0.0) && (pfVar1[-6] != 0.0)) && (pfVar1[2] == param_1)) {
      pfVar1[-5] = 1.4013e-45;
      *pfVar1 = -*pfVar1;
    }
    pfVar1 = pfVar1 + 9;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

