
/* sweep */

void BasePart_PreRender(int param_1)

{
  Ent_ProjectLabelPos(param_1);
  *(short *)(param_1 + 0x30) = (short)(DAT_005b3304 >> 2);
  Proj_AnimTick(param_1);
  return;
}

