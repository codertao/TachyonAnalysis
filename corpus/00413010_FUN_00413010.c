
uint FUN_00413010(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00412ff0(param_1);
  if (param_2 == 0) {
    param_2 = param_1;
  }
  uVar2 = FUN_00412890(param_2);
  if (uVar2 == 0) {
    uVar2 = uVar1;
  }
  while( true ) {
    if (uVar2 == param_2) {
      return -(uint)((*(uint *)(*(int *)(uVar2 + 0xe0) + 0x34) & 0x91e) != 0) & uVar2;
    }
    if (uVar2 == param_1) {
      uVar2 = uVar1;
    }
    if ((*(uint *)(*(int *)(uVar2 + 0xe0) + 0x34) & 0x91e) != 0) break;
    uVar2 = FUN_00412890(uVar2);
    if (uVar2 == 0) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}

