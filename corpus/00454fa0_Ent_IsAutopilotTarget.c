
/* sweep: guess */

undefined4 Ent_IsAutopilotTarget(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x8c) != 0)) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x78), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,0xc,0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

