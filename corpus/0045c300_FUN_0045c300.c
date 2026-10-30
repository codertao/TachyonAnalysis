
void FUN_0045c300(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    do {
      FUN_0045c260(param_1,iVar1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x3c;
    } while (uVar2 < *(uint *)(param_1 + 0x98));
  }
  return;
}

