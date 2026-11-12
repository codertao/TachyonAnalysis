
/* sweep */

void Hud_ArrowsToThreats(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_005b334c;
  iVar1 = 0x10;
  do {
    if (*piVar2 != 0) {
      Hud_DrawOffscreenArrow(param_1,*piVar2,40000,200,0,0);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

