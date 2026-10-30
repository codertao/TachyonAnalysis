
undefined4 FUN_00414cc0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar2 = 0;
    puVar3 = (uint *)(param_1 + 0x20);
    if (0 < *(int *)(param_1 + 0x80)) {
      do {
        if (((*puVar3 & param_2) != 0) && ((code *)puVar3[1] != (code *)0x0)) {
          (*(code *)puVar3[1])(param_1,puVar3[2]);
          uVar1 = 1;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 3;
      } while (iVar2 < *(int *)(param_1 + 0x80));
    }
    return uVar1;
  }
  return uVar1;
}

