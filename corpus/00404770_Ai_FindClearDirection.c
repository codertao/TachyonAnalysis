
/* probe 5000 units +-y/+-x; fallback reverse vel*-2, goal 2000 back */

void Ai_FindClearDirection(int param_1)

{
  int *piVar1;
  int iVar2;
  vec3 local_24;
  undefined1 local_18 [24];
  
  Rot_FromAngles(local_18,(vec3 *)(param_1 + 0x4c));
  local_24.x = 0;
  local_24.y = 0x1388000;
  local_24.z = 0;
  some_rotate_by_global(&local_24,&local_24);
  piVar1 = (int *)(param_1 + 0x34);
  local_24.x = local_24.x + *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0) * 0x10;
  local_24.y = local_24.y + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * 0x10;
  local_24.z = local_24.z + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8) * 0x10;
  iVar2 = Coll_LookaheadCast(piVar1,&local_24,*(int *)(param_1 + 100) + 0x14,param_1,
                             Ai_LookaheadFilter);
  if (iVar2 != 0) {
    local_24.x = 0;
    local_24.y = -0x1388000;
    local_24.z = 0;
    some_rotate_by_global(&local_24,&local_24);
    local_24.x = local_24.x + *piVar1 + *(int *)(param_1 + 0xa0) * 0x10;
    local_24.y = local_24.y + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * 0x10;
    local_24.z = local_24.z + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8) * 0x10;
    iVar2 = Coll_LookaheadCast(piVar1,&local_24,*(int *)(param_1 + 100) + 0x14,param_1,
                               Ai_LookaheadFilter);
    if (iVar2 != 0) {
      local_24.x = -0x1388000;
      local_24.y = 0;
      local_24.z = 0;
      some_rotate_by_global(&local_24,&local_24);
      local_24.x = local_24.x + *piVar1 + *(int *)(param_1 + 0xa0) * 0x10;
      local_24.y = local_24.y + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * 0x10;
      local_24.z = local_24.z + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8) * 0x10;
      iVar2 = Coll_LookaheadCast(piVar1,&local_24,*(int *)(param_1 + 100) + 0x14,param_1,
                                 Ai_LookaheadFilter);
      if (iVar2 != 0) {
        local_24.x = 0x1388000;
        local_24.y = 0;
        local_24.z = 0;
        some_rotate_by_global(&local_24,&local_24);
        local_24.x = local_24.x + *piVar1 + *(int *)(param_1 + 0xa0) * 0x10;
        local_24.y = local_24.y + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * 0x10;
        local_24.z = local_24.z + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8) * 0x10;
        iVar2 = Coll_LookaheadCast(piVar1,&local_24,*(int *)(param_1 + 100) + 0x14,param_1,
                                   Ai_LookaheadFilter);
        if (iVar2 != 0) {
          local_24.x = 0;
          local_24.y = 0;
          local_24.z = -0x7d0000;
          some_rotate_by_global(&local_24,&local_24);
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) * -2;
          *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) * -2;
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) * -2;
          *(int *)(param_1 + 0x344) = local_24.x + *piVar1;
          *(int *)(param_1 + 0x348) = local_24.y + *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x34c) = local_24.z + *(int *)(param_1 + 0x3c);
          return;
        }
      }
    }
  }
  *(int *)(param_1 + 0x344) = local_24.x;
  *(int *)(param_1 + 0x348) = local_24.y;
  *(int *)(param_1 + 0x34c) = local_24.z;
  return;
}

