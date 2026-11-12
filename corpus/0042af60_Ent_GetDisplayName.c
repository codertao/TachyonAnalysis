
/* sweep: desc slot +0x4c cmd 1 */

undefined4 * Ent_GetDisplayName(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x4c);
  if (pcVar1 == (code *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(*pcVar1)(param_1,1,0);
    if (puVar2 == (undefined4 *)0x0) {
      return &DAT_00536778;
    }
  }
  return puVar2;
}

