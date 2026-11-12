
/* sweep: guess */

void Ship_SpawnDamageSmoke(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  vec3 *pvVar6;
  int local_34;
  vec3 local_30;
  vec3 local_24;
  undefined1 local_18 [24];
  
  iVar2 = param_1;
  local_30.x = 0;
  local_30.y = 0;
  local_30.z = -0x1000;
  uVar3 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)&DAT_005b9600);
  if (uVar3 < 0x1388001) {
    Ent_ToCameraSpace(param_1 + 0x18);
    DAT_00666b04 = 0x10000;
    iVar4 = Cull_SphereClip(param_1 + 0x18);
    if ((iVar4 != 0) && (*(int *)(param_2 + 0x30) != 0)) {
      iVar4 = DAT_005b216c;
      if ((*(int *)(param_1 + 0x8c) != 0) &&
         ((piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + 0x6c4), piVar1 != (int *)0x0 &&
          (iVar5 = *piVar1, iVar5 != 0)))) {
        iVar4 = iVar5;
      }
      Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
      local_34 = 4;
      do {
        pvVar6 = (vec3 *)(param_2 + 0x34);
        param_1 = 0;
        if (*(int *)(param_2 + 0x30) != 0) {
          do {
            uVar3 = global_bad_shift_rng();
            local_24.x = pvVar6->x + -50000 + (uVar3 % 50000) * 2;
            uVar3 = global_bad_shift_rng();
            local_30.x = 0;
            local_30.y = 0;
            local_24.y = pvVar6->y + -50000 + (uVar3 % 50000) * 2;
            local_24.z = pvVar6->z;
            local_30.z = distance_between(&local_24,pvVar6);
            local_30.z = local_30.z + -0x20000;
            some_rotate_by_global(&local_30,&local_30);
            local_30.x = local_30.x + *(int *)(iVar2 + 0xa0);
            local_30.y = local_30.y + *(int *)(iVar2 + 0xa4);
            local_30.z = local_30.z + *(int *)(iVar2 + 0xa8);
            some_rotate_by_global(&local_24,&local_24);
            local_24.x = local_24.x + *(int *)(iVar2 + 0x34);
            local_24.y = local_24.y + *(int *)(iVar2 + 0x38);
            local_24.z = local_24.z + *(int *)(iVar2 + 0x3c);
            iVar5 = Particle_SpawnSimple(&local_24,iVar4,0x40000,0xfffff800,&local_30,2,10);
            if (iVar5 != 0) {
              *(uint *)(iVar5 + 0x2c) = (uint)(param_4 * 0xff) / 100;
            }
            param_1 = param_1 + 1;
            pvVar6 = pvVar6 + 1;
          } while (param_1 < *(uint *)(param_2 + 0x30));
        }
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
  }
  return;
}

