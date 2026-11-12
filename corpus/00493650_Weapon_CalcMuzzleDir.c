
/* sweep: guess */

void Weapon_CalcMuzzleDir(void)

{
  vec3 *fresult_out;
  int iVar1;
  vec3 local_30;
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_24.x = 0;
  local_24.y = 0x10000;
  local_24.z = 0;
  local_30.x = 0;
  local_30.y = 0;
  local_30.z = 0;
  fresult_out = (vec3 *)&DAT_005656c8;
  iVar1 = 0x10;
  do {
    Rot_FromAngles(local_18,&local_30);
    some_rotate_by_global(&local_24,fresult_out);
    local_30.z = local_30.z + 0x80000;
    fresult_out = fresult_out + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

