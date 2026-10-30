
void FUN_0040b7e0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 != (uint *)0x0) && (param_1[1] != 0)) {
    uVar2 = 0;
    if (*param_1 != 0) {
      iVar1 = param_1[1] + 0x40;
      do {
        if (*(int *)(iVar1 + 0x40) != 0) {
          FUN_0049de10(iVar1,&DAT_005a61e0);
        }
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x94;
      } while (uVar2 < *param_1);
    }
    FUN_0049c530(param_1[1]);
  }
  return;
}

