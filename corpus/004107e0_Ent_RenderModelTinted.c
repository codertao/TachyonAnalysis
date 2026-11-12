
/* sweep */

void Ent_RenderModelTinted(int param_1)

{
  if (DAT_00562cdc == 0) {
    Ent_Draw(param_1 + 0x18);
    return;
  }
  Gfx_Lock(2);
  Coll_DebugDraw(param_1 + 0x18,DAT_005a6324._1_1_,0,0);
  Gfx_Lock(1);
  return;
}

