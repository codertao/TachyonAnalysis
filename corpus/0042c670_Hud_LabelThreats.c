
/* sweep */

void Hud_LabelThreats(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_005b334c;
  iVar2 = 0x10;
  do {
    iVar1 = *piVar3;
    if (((iVar1 != 0) && (iVar1 != DAT_005b1864)) && (iVar1 != *(int *)(GLBL_SOME_CONTEXT + 0x90)))
    {
      Hud_DrawEntityLabel(param_1,iVar1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

