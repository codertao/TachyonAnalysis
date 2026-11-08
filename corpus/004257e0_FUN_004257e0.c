
void FUN_004257e0(undefined4 param_1,undefined4 param_2)

{
  if ((g_ActiveRules != 0) && (*(code **)(g_ActiveRules + 0x34) != (code *)0x0)) {
    (**(code **)(g_ActiveRules + 0x34))(param_1,param_2);
  }
  return;
}

