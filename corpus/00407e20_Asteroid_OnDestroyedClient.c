
/* sweep */

void Asteroid_OnDestroyedClient
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  Explosion_Spawn(param_1,param_4 << 0xe,2);
  Asteroid_DestroyFx(param_1);
  Snd_PlayAtPos(4,4,0,param_1,0x10000);
  return;
}

