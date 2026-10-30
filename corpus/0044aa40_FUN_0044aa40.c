
void FUN_0044aa40(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_4;
  
  puVar5 = (undefined4 *)0x0;
  iVar3 = 0;
  local_4 = 0;
  FUN_0044a930();
  if (DAT_00598580 == 0) {
    puVar5 = &DAT_00592fe0;
    iVar3 = 8;
  }
  else if (DAT_00598580 == 1) {
    puVar5 = &DAT_005985a0;
    iVar3 = 0x10;
    local_4 = DAT_00598580;
  }
  if (iVar3 != 0) {
    puVar4 = puVar5 + 0x2e;
    do {
      if (puVar4[-2] != 0) {
        if (local_4 == 0) {
          uVar2 = FUN_00449f20(param_1,puVar5);
        }
        else {
          iVar1 = FUN_00449f20(param_1,puVar5);
          uVar2 = (uint)(iVar1 == 0);
        }
        if (uVar2 != 0) {
          FUN_0043fce0(&g_UiManager,puVar4,1,puVar4[0x28] + -2);
          FUN_0043f810(&g_UiManager,puVar4,1);
          FUN_0043f620(&g_UiManager,puVar4 + 0x10,0x80000);
        }
      }
      puVar5 = puVar5 + 0x2ad;
      puVar4 = puVar4 + 0x2ad;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

