
void FUN_00455630(void)

{
  if (*(code **)(g_ActiveRules + 0x88) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0x88))(0);
    return;
  }
  FUN_004157d0();
  return;
}

