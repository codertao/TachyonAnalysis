
/* sweep */

void Gate_Render(int param_1)

{
  if ((*(short *)(param_1 + 0xce) == 0) && ((*(byte *)(*(int *)(param_1 + 0xd8) + 0xe4) & 2) == 0))
  {
    Ent_ProjectLabelPos(param_1);
  }
  Ent_Draw(param_1 + 0x18);
  Ent_ToCameraSpace(*(int *)(*(int *)(param_1 + 0xd8) + 0xd8) + 0x18);
  GateFx_Flicker(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xd8));
  Ent_ToCameraSpace(*(int *)(param_1 + 0xd8) + 0x18);
  GateFx_Render(*(undefined4 *)(param_1 + 0xd8),1);
  return;
}

