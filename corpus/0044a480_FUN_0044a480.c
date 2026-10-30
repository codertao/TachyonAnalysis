
int FUN_0044a480(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_80 [128];
  
  uVar2 = FUN_0046e900();
  str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar2);
  if ((((param_1 != 0) && (*(int *)(param_1 + 0xb0) != 0)) && (*(int *)(param_1 + 0xa9c) != 0)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xa9c) + 0x58), iVar1 != 0)) {
    uVar5 = 1;
    if (1 < *(uint *)(iVar1 + 0x9c)) {
      uVar3 = FUN_0046be00(local_80,param_1 + 0x40);
      uVar5 = param_2;
      if (uVar3 < param_2) {
        uVar5 = uVar3;
      }
    }
    iVar1 = *(int *)(param_1 + 0xa9c);
    *(uint *)(iVar1 + 0x54) = uVar5;
    *(uint *)(param_1 + 0xaa0) = *(int *)(param_1 + 0xaa0) - uVar5;
    FUN_0046be30(local_80,param_1 + 0x40,-uVar5);
    iVar4 = FUN_0046be00(local_80,param_1 + 0x40);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xa9c) = 0;
      *(undefined4 *)(param_1 + 0xaa0) = 0;
      FUN_0043f620(&g_UiManager,param_1 + 0xf8,0x20000);
      Var_SetStr(g_PlayerVarStore,local_80,param_1 + 0x20,s_NOT_USED_005478f8);
    }
    return iVar1;
  }
  return 0;
}

