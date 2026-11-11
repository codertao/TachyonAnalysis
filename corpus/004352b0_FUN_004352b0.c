
undefined4 FUN_004352b0(undefined4 param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  
  psVar2 = *(short **)((int)g_SectorTable[0].spx + 0x18);
  iVar1 = *(int *)((int)g_SectorTable[0].spx + 0x10);
  uVar3 = 0;
  if (*(uint *)((int)g_SectorTable[0].spx + 0x14) != 0) {
    do {
      if ((*psVar2 == 3) && ((*(byte *)(psVar2 + 0x12) & 1) != 0)) {
        *param_2 = *(undefined4 *)(psVar2 + 4);
        param_2[1] = *(undefined4 *)(psVar2 + 6);
        param_2[2] = *(undefined4 *)(psVar2 + 8);
        *param_3 = *(int *)(psVar2 + 10) << 0x10;
        param_3[1] = *(int *)(psVar2 + 0xc) << 0x10;
        param_3[2] = *(int *)(psVar2 + 0xe) << 0x10;
        *param_4 = *(undefined4 *)(iVar1 + 0x20 + *(int *)(psVar2 + 2) * 0x24);
        return 1;
      }
      psVar2 = (short *)((int)psVar2 + (uint)(ushort)psVar2[1]);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)g_SectorTable[0].spx + 0x14));
  }
  return 0;
}

