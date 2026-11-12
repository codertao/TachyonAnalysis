
/* sweep */

void Target_SelectNextOfType(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (GLBL_SOME_CONTEXT != 0) {
    uVar1 = Target_FindNearestOfType
                      (GLBL_SOME_CONTEXT,param_1,0,*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
    Player_SetTarget(uVar1);
  }
  return;
}

