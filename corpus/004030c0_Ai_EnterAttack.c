
/* +0x304 = AiThink_Attack */

void Ai_EnterAttack(int param_1)

{
  *(code **)(param_1 + 0x304) = AiThink_Attack;
  return;
}

