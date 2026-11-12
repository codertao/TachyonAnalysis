
/* sweep */

void Ent_AnimateWhenNear(int param_1)

{
  int iVar1;
  
  iVar1 = Ent_PlayerInTriggerRange(param_1);
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xc0) & 1) != 0)) {
    Ent_ProjectLabelPos(param_1);
    *(short *)(param_1 + 0x30) = (short)(DAT_005b3304 >> 2);
  }
  Ent_Draw(param_1 + 0x18);
  return;
}

