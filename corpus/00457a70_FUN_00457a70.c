
void FUN_00457a70(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  Quad_LinkDynamic(g_Wingman);
  Ent_SetEngageLimits(g_SrvCurShip,DAT_0058b078,2);
  *(undefined1 *)(param_1 + 0xc3) = 0;
  FUN_0045cff0(param_1,param_2 + 0x14);
  return;
}

