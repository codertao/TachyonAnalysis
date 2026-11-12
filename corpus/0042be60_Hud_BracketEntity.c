
/* sweep */

void Hud_BracketEntity(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (param_2 != *(int *)(GLBL_SOME_CONTEXT + 0x90))) {
    uVar1 = Ent_GetIffColor2(param_2,0,0x8000,1);
    Target_ProjectToScreen(param_2,uVar1);
  }
  return;
}

