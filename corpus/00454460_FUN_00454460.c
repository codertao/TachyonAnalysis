
void FUN_00454460(void)

{
  if (DAT_005b3344 == 2) {
    DAT_005b3344 = 4;
    *(undefined **)(GLBL_SOME_CONTEXT + 0x68) = &DAT_00454320;
    FUN_004a09b0(0x9c4);
    FUN_004a0760(0,0xd05,500000,1);
    if (*(code **)(g_ActiveRules + 0x78) != (code *)0x0) {
      (**(code **)(g_ActiveRules + 0x78))(0);
    }
    FUN_004666e0(1,0x15,0,GLBL_SOME_CONTEXT,0x10000);
  }
  return;
}

