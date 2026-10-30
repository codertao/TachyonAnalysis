
int FUN_004b1810(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004b07f0(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return -1;
  }
  iVar2 = puVar1[5] + -1;
  puVar1[5] = iVar2;
  if (iVar2 == 0) {
    FUN_004b17c0(*puVar1);
    return 0;
  }
  return iVar2;
}

