
/* sweep */

void WeapGroup_FindFirst(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_8;
  
  uVar2 = 0;
  uVar4 = 0;
  uVar3 = 0;
  local_8 = 0;
  iVar1 = WeapGroup_GetWeapon(0);
  if (iVar1 != 0) {
    uVar4 = *(uint *)(iVar1 + 0xac);
    local_8 = *(uint *)(iVar1 + 0x60);
  }
  iVar1 = WeapGroup_GetWeapon(1);
  if (iVar1 != 0) {
    uVar3 = *(uint *)(iVar1 + 0xac);
    uVar2 = *(uint *)(iVar1 + 0x60);
  }
  DAT_005b213c = uVar4;
  if ((int)uVar4 <= (int)uVar3) {
    DAT_005b213c = uVar3;
  }
  DAT_005b2144 = local_8;
  if (local_8 <= uVar2) {
    DAT_005b2144 = uVar2;
  }
  if ((DAT_005b2154 & 0x8000) != 0) {
    DAT_005b213c = (uint)((longlong)(int)DAT_005b213c * 45000) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)DAT_005b213c * 45000) >> 0x20) << 0x10;
  }
  return;
}

