
void FUN_0040d710(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 200);
  *(undefined4 *)(iVar1 + 0xfc) = 1;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  FUN_0040ce10(iVar1);
  uVar2 = FUN_0040cf70(*(undefined1 *)(iVar1 + 0xc2),iVar1);
  FUN_0040ce50(uVar2);
  uVar2 = FUN_0040cf70(*(undefined1 *)(iVar1 + 0xc2));
  FUN_0040d630(param_1,uVar2);
  FUN_0040d6e0(param_1);
  return;
}

