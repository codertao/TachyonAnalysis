
void FUN_004351a0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = param_1 + 0x20;
    iVar2 = param_2;
    do {
      uVar1 = FUN_00435120(param_1);
      Desc_CreateByType(uVar1,iVar3,0,&param_2,0,0xffffffff);
      param_1 = param_1 + 0x24;
      iVar3 = iVar3 + 0x24;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

