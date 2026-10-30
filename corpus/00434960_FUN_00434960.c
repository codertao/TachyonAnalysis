
void FUN_00434960(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x44) != -1) {
    iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x3c);
    if ((*(byte *)(param_2 + 0x24) & 2) == 0) {
      iVar1 = *(int *)(iVar1 + 8);
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
    FUN_0041f590(*(int *)(param_2 + 0x44) * 0x20 + *(int *)(iVar1 + 0x74),param_1,&DAT_005a5dd0);
  }
  return;
}

