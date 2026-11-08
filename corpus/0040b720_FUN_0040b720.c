
void FUN_0040b720(int param_1,undefined4 param_2)

{
  if (((*(uint *)(*(int *)(param_1 + 0xd4) + 0x34) & 0x200) != 0) &&
     (*(code **)(g_ActiveRules + 0x30) != (code *)0x0)) {
    (**(code **)(g_ActiveRules + 0x30))(param_2,0);
  }
  return;
}

