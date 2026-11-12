
/* sweep: guess */

void ShipReplica_PreRender(int param_1)

{
  int iVar1;
  
  iVar1 = Ent_IsAlive(param_1);
  if (iVar1 != 0) {
    Ent_ProjectLabelPos(param_1);
  }
  *(short *)(param_1 + 0x30) = (short)(DAT_005b3304 >> 2);
  Ent_Draw(param_1 + 0x18);
  if (*(int *)(param_1 + 0xe8) == DAT_005b22f8) {
    HudWidget_Queue(param_1,0,DAT_005a6324 & 0xff);
  }
  return;
}

