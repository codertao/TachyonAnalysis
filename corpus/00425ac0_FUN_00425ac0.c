
void FUN_00425ac0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_00457b60(param_4,param_1);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xe8) = param_3;
    sVar1 = *(short *)(*(int *)(iVar2 + 0xf0) + 0x48);
    if (sVar1 != -1) {
      FUN_00436130((int)sVar1,*(undefined2 *)(*(int *)(iVar2 + 0xf0) + 0x4a),param_3 == 0);
    }
    FUN_0045df50(*(undefined4 *)(iVar2 + 0x78),param_3,1,*(undefined4 *)(iVar2 + 100));
  }
  return;
}

