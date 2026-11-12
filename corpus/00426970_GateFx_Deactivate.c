
/* sweep */

void GateFx_Deactivate(undefined4 param_1)

{
  Explosion_SpawnSparks(param_1,0x18000,&PTR_DAT_00536054,2,0x80,0x60000);
  Snd_PlayAtPos(1,0x16,0,param_1,0x10000);
  return;
}

