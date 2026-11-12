
/* sweep: guess */

void Cbin_CountAllKeys(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  for (iVar2 = *(int *)(param_1 + 0x18); iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar1 = Cbin_CountKeyValues(param_1,iVar3);
    *(int *)(iVar3 + 0xc) = iVar1;
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar1 + 1;
      Cbin_ParseKeyValues(param_1,iVar3);
    }
    iVar3 = iVar3 + 0x1c;
  }
  return;
}

