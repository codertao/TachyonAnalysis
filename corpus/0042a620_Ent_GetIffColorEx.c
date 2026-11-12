
/* sweep */

void Ent_GetIffColorEx(int param_1,int param_2)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return;
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x74);
  if (pcVar1 != (code *)0x0) {
    if (param_2 == 0) {
      (*pcVar1)(param_1,3);
      return;
    }
    (*pcVar1)(param_1,1);
    return;
  }
  Hud_TeamColor(*(undefined1 *)(param_1 + 0xc2),param_2);
  return;
}

