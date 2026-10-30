
int FUN_00490130(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_00490080(param_2);
  iVar3 = 0;
  if (iVar1 < 1) {
    return iVar1;
  }
  do {
    puVar2 = (undefined4 *)FUN_004900f0(param_1,param_2,iVar3);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar1);
  return iVar1;
}

