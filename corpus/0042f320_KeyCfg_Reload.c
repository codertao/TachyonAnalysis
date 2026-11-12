
/* sweep */

void KeyCfg_Reload(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (DAT_0053cbc8 != 0) {
    puVar2 = &DAT_0053cbd0;
    do {
      puVar2[-1] = 0xffffffff;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      piVar1 = puVar2 + 6;
      puVar2 = puVar2 + 8;
    } while (*piVar1 != 0);
  }
  KeyCfg_Load(param_1);
  KeyCfg_BuildStateLists();
  KeyCfg_LinkLists();
  return;
}

