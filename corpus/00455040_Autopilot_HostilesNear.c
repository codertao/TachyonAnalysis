
/* sweep: guess */

undefined4 Autopilot_HostilesNear(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(GLBL_SOME_CONTEXT + 100) + 8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (((*(int *)(iVar1 + 0x8c) != 0) &&
        (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x78), pcVar2 != (code *)0x0)) &&
       (iVar3 = (*pcVar2)(iVar1,0x18,0), iVar3 != 0)) break;
    iVar1 = *(int *)(iVar1 + 0x94);
  }
  return 1;
}

