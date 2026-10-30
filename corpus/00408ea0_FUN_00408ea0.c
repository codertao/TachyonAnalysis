
void FUN_00408ea0(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_18 [24];
  
  FUN_004b1bb0(local_18,param_2);
  uVar2 = 0;
  if (*param_1 != 0) {
    iVar1 = param_1[1] + 100;
    do {
      FUN_004b24d0(iVar1,iVar1 + 0xc);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x80;
    } while (uVar2 < *param_1);
  }
  return;
}

