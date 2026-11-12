
/* clear target +0x90, threat-list remove (0x493910 op 2) */

void Missile_LoseLock(int param_1)

{
  Ent_CallDescHook7c(*(undefined4 *)(param_1 + 0x90),2);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}

