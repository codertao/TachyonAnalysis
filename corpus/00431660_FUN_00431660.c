
void FUN_00431660(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    FUN_004e62cf(iVar2,param_1[1],param_1[2],0xcccc);
    piVar1 = param_1 + 3;
    param_1 = param_1 + 3;
    iVar2 = *piVar1;
  }
  FUN_004e7194(0,0xc9,0xff,0,0,0);
  return;
}

