
undefined4 FUN_0041f0e0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_10 [16];
  
  if ((*(int *)(*(int *)(param_4 + 0x5c) + 0x24) == 0) &&
     (*(int *)(*(int *)(param_4 + 0x5c) + 0x28) == 0)) {
    FUN_0041ebe0(local_10,param_1);
    iVar1 = FUN_0041df50(local_10);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x50) != 0)) {
      iVar4 = *(int *)(iVar1 + 0x54);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x50) != 0) {
        do {
          iVar2 = FUN_004c67c0(iVar4,param_2);
          if (iVar2 == 0) {
            if ((*(int *)(iVar4 + 0x20) != 0) &&
               ((uint)(DAT_005897e4 - *(int *)(iVar4 + 0x20)) < param_3)) {
              return 0;
            }
            if (*(int *)(iVar1 + 0x6c) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x78);
            }
            FUN_0045d860(local_10,param_2,1,uVar3,param_4);
            *(int *)(iVar4 + 0x20) = DAT_005897e4;
            return 1;
          }
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 0x40;
        } while (uVar5 < *(uint *)(iVar1 + 0x50));
      }
    }
  }
  return 0;
}

