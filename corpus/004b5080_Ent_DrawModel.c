
/* refine: distance LOD pick (Ent_SelectLod) -> single/multi part draw */

void Ent_DrawModel(byte *param_1)

{
  int iVar1;
  
  if (((*param_1 & 2) == 0) && (*(int *)(param_1 + 0x40) != 0)) {
    iVar1 = Ent_SelectLod(param_1);
    if (iVar1 != 0) {
      if (1 < *(uint *)(iVar1 + 4)) {
        Model_DrawMultiPart();
        Pipe_BumpModelCount();
        return;
      }
      Model_DrawSinglePart(param_1,iVar1);
      Pipe_BumpModelCount();
    }
  }
  return;
}

