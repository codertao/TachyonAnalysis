
/* sweep */

void FxProp_OnDamage(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xbc) - DAT_005653e0;
  *(int *)(param_1 + 0xbc) = iVar1;
  if (iVar1 < 1) {
    Explosion_Spawn(param_1 + 0x34,0x10000,6);
    Snd_PlayAtEnt(9,4,0,param_1,0x10000);
    Fx_Remove(param_1);
  }
  return;
}

