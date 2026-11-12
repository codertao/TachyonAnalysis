
/* sweep */

void Base_SpawnFromPlacement(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  Spx_RemapPlacementNames(param_1,param_3);
  iVar1 = Spx_TestVar(param_1 + 0x3c);
  if (iVar1 != 0) {
    iVar1 = Base_SpawnParts(*(undefined4 *)(param_2 + 0x94),param_1,param_3,param_2);
    if (((*(int *)(param_2 + 0x124) == 1) && (iVar1 != 0)) &&
       (*(code **)(g_ActiveRules + 100) != (code *)0x0)) {
      (**(code **)(g_ActiveRules + 100))(iVar1,*(undefined1 *)(iVar1 + 0xc2));
    }
  }
  return;
}

