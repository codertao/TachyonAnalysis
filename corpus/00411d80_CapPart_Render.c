
/* sweep */

void CapPart_Render(int param_1)

{
  Ent_ProjectLabelPos(param_1);
  Ent_RenderModelTinted(param_1);
  if ((DAT_005b22f8 != 0) && (*(int *)(param_1 + 0xe8) == DAT_005b22f8)) {
    HudWidget_Queue(param_1,1,DAT_005a6324 & 0xff);
  }
  return;
}

