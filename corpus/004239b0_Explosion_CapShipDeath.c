
/* sweep */

void Explosion_CapShipDeath(vec3 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((param_4 & 0x20) != 0) {
    param_3 = param_3 << 1;
  }
  if ((param_4 & 0x40) != 0) {
    param_3 = param_3 << 2;
  }
  if ((param_4 & 0x10) != 0) {
    if ((param_4 & 0x40) == 0) {
      uVar5 = (-(uint)((param_4 & 0x20) != 0) & 0x4000) + 0x4000;
    }
    else {
      uVar5 = 0x10000;
    }
    uVar2 = global_bad_shift_rng();
    uVar3 = global_bad_shift_rng();
    Particle_SpawnOrientedA(param_1,DAT_005a7514,uVar5,uVar5 >> 2,uVar2 & 0x7fffff,uVar3 & 0x7fffff)
    ;
    Particle_SpawnOrientedB(param_1,DAT_005a7514,uVar5,uVar5,uVar2 & 0x7fffff,uVar3 & 0x7fffff);
    return;
  }
  if ((param_4 & 0x80) == 0) {
    if ((param_4 & 2) == 0) {
      if ((param_4 & 4) == 0) {
        if ((param_4 & 8) == 0) {
          uVar5 = global_bad_shift_rng();
          lVar1 = (longlong)(int)((uVar5 >> 4 & 0x7fff) + 0x2000) * (longlong)param_3;
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar4 = 9;
        }
        else {
          uVar5 = global_bad_shift_rng();
          lVar1 = (longlong)(int)((uVar5 >> 4 & 0xffff) + 0x8000) * (longlong)param_3;
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar4 = 0xb;
        }
      }
      else {
        uVar5 = global_bad_shift_rng();
        lVar1 = (longlong)(int)((uVar5 >> 4) % 0xc000 + 0x8000) * (longlong)param_3;
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        uVar4 = 0xb;
      }
    }
    else {
      uVar5 = param_3 * 2;
      uVar4 = 3;
    }
  }
  else {
    uVar5 = 0xa0000;
    uVar4 = 0xb;
  }
  Explosion_Spawn(param_1,uVar5,uVar4);
  Debris_SpawnBurning(param_1,3);
  uVar5 = distance_between(param_1,(vec3 *)&DAT_005b9600);
  if (uVar5 < 0x800000) {
    Debris_SpawnBurst(&PTR_DAT_00535a1c,param_1,&local_10,0x32,0x4b,2,0x10000,0x50000,0xc,0,0x19);
  }
  if (((param_4 & 0x80) == 0) && ((param_4 & 2) != 0)) {
    Scene_SetFade(0xff0000,0xfffc0000,0,0);
    Snd_Play2D(10,4,0xc,0xff);
    return;
  }
  Snd_PlayAtPos(10,4,0,param_1,0x10000);
  return;
}

