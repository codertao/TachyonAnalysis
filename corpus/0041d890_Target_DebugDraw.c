
/* sweep */

void Target_DebugDraw(void)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(GLBL_SOME_CONTEXT + 0x90);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x8c) != 0)) &&
     (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 100), pcVar2 != (code *)0x0)) {
    (*pcVar2)(iVar1);
  }
  return;
}

