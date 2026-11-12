
/* sweep: (pos, scale, flags) composite explosion */

void Explosion_Spawn(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = (param_3 & 0xff) >> 2 & 1;
  uVar1 = global_bad_shift_rng();
  uVar5 = DAT_005a7454;
  if ((uVar1 & 0xff00) < 0x8000) {
    uVar5 = DAT_005a743c;
  }
  Explosion_SpawnFlash(param_1,uVar5,param_2,uVar4);
  uVar1 = uVar4;
  if ((param_3 & 8) == 0) {
    iVar2 = _rand();
    iVar3 = (iVar2 >> 8 & 3U) + 1;
    iVar2 = param_2;
  }
  else {
    iVar2 = _rand();
    iVar3 = (iVar2 >> 8 & 3U) + 4;
    iVar2 = param_2 * 2;
  }
  Explosion_SpawnSmoke(param_1,iVar2,iVar3,uVar1);
  uVar5 = 0xc;
  uVar1 = uVar4;
  iVar2 = _rand();
  Explosion_SpawnFireballs(param_1,param_2,DAT_005a7430,(iVar2 >> 8 & 3U) + 5,uVar1,uVar5);
  uVar5 = 0xc;
  uVar1 = uVar4;
  iVar2 = _rand();
  Explosion_SpawnFireballs(param_1,param_2,DAT_005a7460,(iVar2 >> 8 & 3U) + 5,uVar1,uVar5);
  Explosion_SpawnSparksA(param_1,param_2);
  Explosion_SpawnSparksB(param_1,param_2);
  if ((param_3 & 1) != 0) {
    iVar2 = _rand();
    Explosion_SpawnShockwave(param_1,param_2,(iVar2 >> 8 & 1U) + 1,uVar4);
  }
  if ((param_3 & 2) != 0) {
    Explosion_Rumble(param_1);
  }
  return;
}

