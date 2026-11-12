
/* sweep */

void FireFx_EmitSparks(int param_1)

{
  uint uVar1;
  vec3 local_3c;
  vec3 local_30;
  vec3 local_24;
  undefined1 local_18 [24];
  
  uVar1 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)&DAT_005b9600);
  if (uVar1 < 0x1388001) {
    uVar1 = global_bad_shift_rng();
    local_30.x = ((uVar1 & 0x3fffff) - 0x200000) + ((vec3 *)(param_1 + 0x4c))->x;
    uVar1 = global_bad_shift_rng();
    local_30.y = ((uVar1 & 0x3fffff) - 0x200000) + *(int *)(param_1 + 0x50);
    local_30.z = 0;
    Rot_FromAngles(local_18,&local_30);
    some_rotate_by_global((vec3 *)(param_1 + 0x10c),&local_24);
    Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
    some_rotate_by_global((vec3 *)(param_1 + 0x118),&local_3c);
    local_3c.x = local_3c.x + ((vec3 *)(param_1 + 0x34))->x;
    local_3c.z = local_3c.z + *(int *)(param_1 + 0x3c);
    local_3c.y = local_3c.y + *(int *)(param_1 + 0x38);
    Particle_Spawn(&local_3c,*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108),
                   *(undefined4 *)(param_1 + 0x124),&local_24,2,0x10,0,1);
  }
  return;
}

