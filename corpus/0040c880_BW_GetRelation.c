
/* sweep */

int BW_GetRelation(int param_1)

{
  int iVar1;
  undefined4 in_EAX;
  uint uVar2;
  
  if (*(short *)(param_1 + 0x76) == 1) {
    return CONCAT31((int3)((uint)in_EAX >> 8),*(byte *)(param_1 + 0xc2) != g_SrvCurShip->team) + 1;
  }
  iVar1 = (uint)g_SrvCurShip->team * 0x10 + DAT_0058f2e8;
  uVar2 = *(uint *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + DAT_0058f2e8);
  if ((*(uint *)(iVar1 + 4) & uVar2) != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),2);
  }
  uVar2 = *(uint *)(iVar1 + 8) & uVar2;
  uVar2 = CONCAT31((int3)(-uVar2 >> 8),-(uVar2 != 0)) & 0xfffffffd;
  return CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x04');
}

