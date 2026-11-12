
/* sweep: guess */

void Target_SelectAttacker(void)

{
  undefined4 uVar1;
  
  if (GLBL_SOME_CONTEXT != 0) {
    uVar1 = Target_FindAttacker(GLBL_SOME_CONTEXT,0x1b,*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90));
    Player_SetTarget(uVar1);
  }
  return;
}

