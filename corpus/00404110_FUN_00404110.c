
void FUN_00404110(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_2 + 200) < *(short *)(param_2 + 0xca)) {
    if ((*(short *)(param_2 + 0x76) != 1) || (iVar1 = FUN_00404070(param_1,param_2), iVar1 == 0)) {
      if ((*(uint *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + 8 + DAT_0058f2e8) &
          *(uint *)((uint)*(byte *)(param_2 + 0xc2) * 0x10 + DAT_0058f2e8)) != 0) {
        return;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x24);
      iVar3 = DAT_0058f2e8;
      if (iVar1 == 0) {
        return;
      }
      while ((((*(short *)(iVar1 + 0x76) != 2 ||
               ((*(uint *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + 8 + iVar3) &
                *(uint *)((uint)*(byte *)(iVar1 + 0xc2) * 0x10 + iVar3)) == 0)) ||
              (*(int *)(iVar1 + 0x90) != 0)) ||
             (((iVar1 == param_1 || (*(int *)(iVar1 + 0x104) == 0xb)) ||
              (iVar2 = FUN_00401550(iVar1,param_2), iVar3 = DAT_0058f2e8, iVar2 == 0))))) {
        iVar1 = *(int *)(iVar1 + 0x9c);
        if (iVar1 == 0) {
          return;
        }
      }
      FUN_00401080(iVar1,1);
    }
    *(undefined4 *)(param_1 + 0x314) = 0;
  }
  return;
}

