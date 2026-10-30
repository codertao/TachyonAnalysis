
void FUN_0045c0a0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      FUN_0045c070(param_1,uVar1);
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 + 100;
    } while (uVar2 < *param_1);
  }
  return;
}

