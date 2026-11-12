
/* client rocket smoke trail: particles within 6000 units of camera (table 0x55a534 by def+0x80) */

void Proj_EmitTrail(int param_1,int param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  uVar3 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)&DAT_005b9600);
  if (uVar3 < 0x1770001) {
    pbVar1 = (byte *)(param_1 + 0x18);
    Ent_ToCameraSpace(pbVar1);
    if ((*pbVar1 & 0x10) == 0) {
      DAT_00666b04 = 0x10000;
    }
    else {
      DAT_00666b04 = *(undefined4 *)(param_1 + 0x1c);
    }
    iVar4 = Cull_SphereClip(pbVar1);
    if (iVar4 != 0) {
      uVar2 = *(undefined4 *)(&PTR_DAT_0055a534)[param_2 * 3];
      uVar3 = uVar3 >> 0x10;
      if (0x100 < uVar3) {
        uVar3 = 0x100;
      }
      uVar3 = (0x100 - uVar3) * (0x100 - uVar3) >> 0xd;
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar5 = global_bad_shift_rng();
        local_c = (int)((uVar5 & 0xffff) - 0x8000) >> 5;
        uVar5 = global_bad_shift_rng();
        local_8 = (int)((uVar5 & 0xffff) - 0x8000) >> 5;
        uVar5 = global_bad_shift_rng();
        local_4 = (int)((uVar5 & 0xffff) - 0x8000) >> 5;
        Particle_SpawnSimple
                  ((vec3 *)(param_1 + 0x34),uVar2,*(undefined4 *)(&DAT_0055a538 + param_2 * 0xc),0,
                   &local_c,1,0);
      }
    }
  }
  return;
}

