
void FUN_0040b590(int param_1,undefined4 param_2)

{
  if (((*(uint *)(*(int *)(param_1 + 0xdc) + 0x34) & 0x200) != 0) &&
     (*(code **)(g_ActiveRules + 0x2c) != (code *)0x0)) {
    (**(code **)(g_ActiveRules + 0x2c))(param_2,0);
  }
  return;
}

