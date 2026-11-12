
/* sweep: SrvSend_EntityDestroyed with random variant */

void Sped_SendDeathExplosion(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  
  bVar1 = global_bad_shift_rng();
  if ((bVar1 & 0xf) < 5) {
    SrvSend_EntityDestroyed(param_1,3,1,0,0,0,param_2,param_3);
    return;
  }
  SrvSend_EntityDestroyed(param_1,3,0,0,0,0,param_2,param_3);
  return;
}

