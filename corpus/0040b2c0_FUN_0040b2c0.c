
void FUN_0040b2c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  if (iVar2 != 0) {
    iVar1 = FUN_0040b260(param_1,param_2);
    if (iVar1 == 0) {
      iVar2 = FUN_0040b0b0(*(int *)(*(int *)(iVar2 + 0x94) + 4) + param_2 * 0x80,param_3,iVar2,
                           *(int *)(iVar2 + 0x94),param_1,*(undefined1 *)(param_1 + 0xc2));
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
        *(int *)(param_1 + 0xe0) = iVar2;
        FUN_004231f0(6,0,iVar2 + 0x34,0,0);
      }
    }
  }
  return;
}

