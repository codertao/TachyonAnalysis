
uint FUN_00412f90(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    param_2 = param_1;
  }
  uVar2 = *(uint *)(param_2 + 0xd8);
  if (*(uint *)(param_2 + 0xd8) == 0) {
    uVar2 = param_1;
  }
  while( true ) {
    if (uVar2 == param_2) {
      return -(uint)((*(uint *)(*(int *)(uVar2 + 0xe0) + 0x34) & 0x91e) != 0) & uVar2;
    }
    if ((*(uint *)(*(int *)(uVar2 + 0xe0) + 0x34) & 0x91e) != 0) break;
    puVar1 = (uint *)(uVar2 + 0xd8);
    uVar2 = *puVar1;
    if (*puVar1 == 0) {
      uVar2 = param_1;
    }
  }
  return uVar2;
}

