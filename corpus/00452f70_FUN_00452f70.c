
void FUN_00452f70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (GLBL_SOME_CONTEXT != 0) {
    if (DAT_005b20dc == 0) {
      uVar1 = FUN_00492c30(&DAT_005b1f10,DAT_005b20d0,(&DAT_005b20d4)[param_1],&g_PlayerPower,
                           param_3,param_2,DAT_005b2154);
      iVar2 = FUN_00497b70(GLBL_SOME_CONTEXT,uVar1);
    }
    else {
      uVar1 = FUN_00492c30(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d4,&g_PlayerPower,param_3,param_2,
                           DAT_005b2154);
      iVar2 = FUN_00497b70(GLBL_SOME_CONTEXT,uVar1);
      uVar1 = FUN_00492c30(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d8,&g_PlayerPower,param_3,param_2,
                           DAT_005b2154);
      iVar3 = FUN_00497b70(GLBL_SOME_CONTEXT,uVar1);
      iVar2 = iVar2 + iVar3;
    }
    if (iVar2 != 0) {
      DAT_005b2110 = 0x8c;
      FUN_00452eb0();
      return;
    }
  }
  return;
}

