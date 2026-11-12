
/* sweep */

void Cargo_Render(int param_1)

{
  int iVar1;
  
  iVar1 = Cargo_PlayerInRange(param_1);
  if (iVar1 != 0) {
    Ent_ProjectLabelPos(param_1);
  }
  *(short *)(param_1 + 0x30) = (short)(DAT_005b3304 >> 2);
  Ent_Draw(param_1 + 0x18);
  return;
}

