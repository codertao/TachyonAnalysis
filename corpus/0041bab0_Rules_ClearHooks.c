
/* sweep */

void Rules_ClearHooks(void)

{
  *(undefined4 *)(g_ActiveRules + 0x70) = 0;
  *(undefined4 *)(g_ActiveRules + 0x7c) = 0;
  *(undefined4 *)(g_ActiveRules + 0x78) = 0;
  *(undefined4 *)(g_ActiveRules + 0x88) = 0;
  *(undefined4 *)(g_ActiveRules + 0x90) = 0;
  *(undefined4 *)(g_ActiveRules + 0x98) = 0;
  return;
}

