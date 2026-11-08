
void FUN_0044a930(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = &DAT_00593098;
  iVar1 = 8;
  do {
    if (*(int *)(puVar2 + 0x9e4) == 0) {
      FUN_0043f5d0(&g_UiManager,puVar2,0);
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      FUN_0043f5d0(&g_UiManager,puVar2,9);
      uVar4 = 8;
      uVar3 = 8;
    }
    FUN_0043fce0(&g_UiManager,puVar2,uVar3,uVar4);
    FUN_0043f810(&g_UiManager,puVar2,0);
    FUN_0043f840(&g_UiManager,puVar2 + 0x40,0x80000);
    set_flag_10c_on_elem_by_id(&g_UiManager,puVar2 + 0x40,0x400);
    puVar2 = puVar2 + 0xab4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = &DAT_00598658;
  iVar1 = 0x10;
  do {
    if (*(int *)(puVar2 + 0x9e4) == 0) {
      FUN_0043f5d0(&g_UiManager,puVar2,0);
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      FUN_0043f5d0(&g_UiManager,puVar2,9);
      uVar4 = 9;
      uVar3 = 9;
    }
    FUN_0043fce0(&g_UiManager,puVar2,uVar3,uVar4);
    FUN_0043f810(&g_UiManager,puVar2,0);
    FUN_0043f840(&g_UiManager,puVar2 + 0x40,0x80000);
    set_flag_10c_on_elem_by_id(&g_UiManager,puVar2 + 0x40,0x400);
    puVar2 = puVar2 + 0xab4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

