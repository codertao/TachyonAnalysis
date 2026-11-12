
/* sweep */

void Mine_Render(int param_1)

{
  Ent_ProjectLabelPos(param_1);
  *(undefined2 *)(param_1 + 0x30) = (undefined2)DAT_005b3304;
  Ent_Draw(param_1 + 0x18);
  return;
}

