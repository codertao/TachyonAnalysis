
void FUN_0045c1f0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = 0;
  param_1[0x52] = 0;
  if (*param_1 != 0) {
    do {
      FUN_0045c0d0(param_1,uVar1);
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 + 100;
    } while (uVar2 < *param_1);
  }
  param_1[0xd] = 0;
  param_1[0xc] = param_1[0xb];
  param_1[0xf] = *(uint *)(param_1[0xb] + 4);
  param_1[0xe] = *(uint *)param_1[0xc];
  FUN_0045a190((uint *)param_1[0xc] + 4);
  FUN_0045b2c0(param_1[0xc],param_1);
  return;
}

