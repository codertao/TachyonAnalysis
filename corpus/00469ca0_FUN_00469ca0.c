
undefined4 FUN_00469ca0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_24;
  char local_20 [32];
  
  local_24 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_0048fd70(g_PlayerVarStore,param_1,param_1 + 0x20,local_20,0x1f,&local_24);
    if (iVar2 != 0) {
      if ((*(uint *)(param_1 + 0x60) & 0x800) != 0) {
        uVar3 = FUN_004bd32f(param_1 + 0x40);
        uVar1 = *(uint *)(param_1 + 0x60);
        if (((uVar1 & 1) != 0) && (uVar3 < local_24)) {
          return 1;
        }
        if (((uVar1 & 2) != 0) && (local_24 < uVar3)) {
          return 1;
        }
        if (((uVar1 & 4) != 0) && (uVar3 == local_24)) {
          return 1;
        }
        if (((uVar1 & 8) != 0) && (uVar3 != local_24)) {
          return 1;
        }
      }
      if (local_20[0] != '\0') {
        iVar2 = str_cmp(local_20,param_1 + 0x40);
        if (iVar2 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

