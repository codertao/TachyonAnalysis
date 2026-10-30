
uint * FUN_004900f0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_004900a0(param_2);
  if (iVar1 == -1) {
    return (uint *)0x0;
  }
  puVar2 = (uint *)FUN_0048fb00(param_1,iVar1);
  if (puVar2 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (*puVar2 <= param_3) {
    return (uint *)0x0;
  }
  return puVar2 + param_3 + 2;
}

