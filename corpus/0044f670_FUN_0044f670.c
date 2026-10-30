
void FUN_0044f670(void)

{
  undefined1 local_80 [128];
  
  if (*(code **)(DAT_00590238 + 0x58) == (code *)0x0) {
    FUN_0044f620();
  }
  else {
    (**(code **)(DAT_00590238 + 0x58))();
  }
  str_sprintf(local_80,s_GAME_WILL_RESTART_IN_A_FEW_MOMEN_00548508);
  FUN_0048e970(local_80,DAT_00590d44,0x140,0x1b8,0xffff00,0xffff,0x10000,6);
  return;
}

