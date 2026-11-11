
void FUN_00460120(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_0045d680(*param_1,g_SrvCurShip->quadrant);
  if (iVar1 != 0) {
    iVar1 = FUN_00405d60(iVar1);
    if (iVar1 != 0) {
      local_4 = *(undefined4 *)(iVar1 + 0x20);
      local_18 = 0;
      local_14 = 0;
      local_10 = 8;
      local_c = 0;
      local_8 = 1;
      Mission_PostEvent(&local_18,g_SrvCurShip->quadrant);
    }
  }
  return;
}

