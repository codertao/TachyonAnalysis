
/* 'SKILL: %s DB=%d' / 'AI FUNC: %x THR: %d' overlay */

int AiDebug_DrawSkill(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 local_80 [128];
  
  bVar1 = *(byte *)(*DAT_005b2770 + 4);
  param_2 = param_2 + (uint)bVar1;
  uVar2 = Ai_SkillName(*(undefined2 *)(param_1 + 0x310),*(undefined1 *)(param_1 + 0x325));
  str_sprintf(local_80,s_SKILL___s_DB__d_0054a39c,uVar2);
  FUN_0048e970(local_80,DAT_005b2770,0x1c,param_2,0xc4c4ff,0xffff,0x10000,2);
  param_2 = param_2 + (uint)bVar1;
  str_sprintf(local_80,s_AI_FUNC___x_THR___d_0054a388,*(undefined4 *)(param_1 + 0x304),
              (int)*(short *)(param_1 + 0x312));
  FUN_0048e970(local_80,DAT_005b2770,0x1c,param_2,0xc4ffff,0xffff,0x10000,2);
  return param_2;
}

