
/* sweep: desc slot +0x74 */

void Ent_GetIffColor(int param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return;
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x74);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,0);
    return;
  }
  Hud_TeamColorIndex(*(undefined1 *)(param_1 + 0xc2));
  return;
}

