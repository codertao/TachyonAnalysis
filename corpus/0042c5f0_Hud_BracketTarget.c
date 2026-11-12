
/* sweep */

void Hud_BracketTarget(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = Ent_GetIffColor(param_1,0,0x10000,0);
    Target_ProjectToScreen(param_1,uVar1);
  }
  return;
}

