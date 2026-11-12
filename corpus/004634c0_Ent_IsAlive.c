
/* sweep: +0xce == 0, guess */

bool Ent_IsAlive(int param_1)

{
  return *(short *)(param_1 + 0xce) == 0;
}

