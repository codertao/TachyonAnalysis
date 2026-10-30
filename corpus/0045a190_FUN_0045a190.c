
void FUN_0045a190(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      FUN_004a0990();
    }
    else if (iVar1 == 1) {
      FUN_004a0760(param_1[1],param_1[2],param_1[3],param_1[4]);
    }
  }
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      FUN_004a0ba0();
    }
    else if (iVar1 == 1) {
      FUN_004a0aa0(param_1[6],param_1[7]);
    }
  }
  iVar1 = param_1[10];
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      FUN_004a0750();
    }
    else if (iVar1 == 1) {
      FUN_004a05f0(param_1[0xb],param_1[0xc]);
    }
  }
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      FUN_004a0a90();
      return;
    }
    if (iVar1 == 1) {
      FUN_004a09b0(param_1[9]);
    }
  }
  return;
}

