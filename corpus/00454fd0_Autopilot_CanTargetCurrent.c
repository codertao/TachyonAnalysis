
/* sweep: guess */

int Autopilot_CanTargetCurrent(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Ent_IsAutopilotTarget(*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
  if (iVar1 != 0) {
    return *(int *)(GLBL_SOME_CONTEXT + 0x90);
  }
  iVar1 = ObjDisplay_ShouldShow();
  if (iVar1 != 0) {
    iVar2 = Ent_IsAutopilotTarget(iVar1);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  if (DAT_0058f488 != 0) {
    iVar1 = Ent_IsAutopilotTarget(DAT_005b3318);
    if (iVar1 != 0) {
      return DAT_005b3318;
    }
  }
  return 0;
}

