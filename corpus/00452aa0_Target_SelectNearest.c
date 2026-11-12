
/* sweep: guess */

void Target_SelectNearest(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  if (GLBL_SOME_CONTEXT != 0) {
    iVar1 = *(int *)(GLBL_SOME_CONTEXT + 0x90);
    if (iVar1 == 0) {
      Target_SelectNextOfType(2);
      return;
    }
    if (*(char *)(iVar1 + 0xc2) != '\x02') {
      Target_SelectNextOfType(2);
      return;
    }
    local_4 = distance_between((vec3 *)(GLBL_SOME_CONTEXT + 0x34),(vec3 *)(iVar1 + 0x34));
    iVar2 = Target_FindNearestAny(GLBL_SOME_CONTEXT,2,&local_4);
    if (iVar2 == 0) {
      Target_SelectNextOfType(2);
      return;
    }
    Player_SetTarget(iVar2,iVar1);
  }
  return;
}

