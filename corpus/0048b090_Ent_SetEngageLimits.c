
/* +0xca max attackers, +0xce max missiles in flight */

void Ent_SetEngageLimits(int param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_0048b050(param_1);
  *(undefined2 *)(param_1 + 0xca) = param_2;
  *(undefined2 *)(param_1 + 0xce) = param_3;
  return;
}

