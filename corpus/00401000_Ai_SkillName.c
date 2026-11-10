
/* skill 0..3 -> ROOKIE/VETERAN/ACE/ELITE (debug overlay) */

char * Ai_SkillName(uint param_1)

{
  if (param_1 < 4) {
    return (&g_AiSkillNames)[param_1];
  }
  return s_UNKNOWN_00532584;
}

