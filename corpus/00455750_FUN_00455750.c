
void FUN_00455750(void)

{
  if (*(code **)(g_ActiveRules + 0xa0) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0xa0))();
  }
  DAT_005b39ec = 1;
  FUN_00466590(1,5,4,0xff);
  FUN_00458750(&LAB_004585c0);
  FUN_00423e80(GLBL_SOME_CONTEXT,DAT_005b1ecc);
  *(undefined1 **)(GLBL_SOME_CONTEXT + 0x68) = &LAB_00455740;
  Hyper_Enter();
  FUN_004159e0();
  return;
}

