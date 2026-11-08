
void FUN_0045c810(int param_1)

{
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_24.x = 0;
  local_24.z = 0;
  if ((DAT_00603e48 & 2) == 0) {
    local_24.y = (-(uint)((DAT_00603e48 & 1) != 0) & 0x30000) + 0x10000;
  }
  else {
    local_24.y = 0x2000;
  }
  local_24.y = local_24.y * param_1;
  FUN_004b1bb0(local_18,(vec3 *)&DAT_0058f1f8);
  some_rotate_by_global(&local_24,&local_24);
  DAT_0058f1ec = DAT_0058f1ec + local_24.x;
  DAT_0058f1f0 = DAT_0058f1f0 + local_24.y;
  DAT_0058f1f4 = DAT_0058f1f4 + local_24.z;
  return;
}

