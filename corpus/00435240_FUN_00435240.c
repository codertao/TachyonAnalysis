
undefined4 FUN_00435240(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)g_SectorTable[0].spx + 0x18);
  uVar2 = 0;
  if (*(uint *)((int)g_SectorTable[0].spx + 0x14) != 0) {
    do {
      if ((*(uint *)(iVar1 + 0x24) & 0x1000) != 0) {
        *param_1 = *(undefined4 *)(iVar1 + 8);
        param_1[1] = *(undefined4 *)(iVar1 + 0xc);
        param_1[2] = *(undefined4 *)(iVar1 + 0x10);
        *param_2 = *(int *)(iVar1 + 0x14) << 0x10;
        param_2[1] = *(int *)(iVar1 + 0x18) << 0x10;
        param_2[2] = *(int *)(iVar1 + 0x1c) << 0x10;
        return 1;
      }
      iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + 2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)g_SectorTable[0].spx + 0x14));
  }
  return 0;
}

