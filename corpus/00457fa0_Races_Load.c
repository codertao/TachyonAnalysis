
/* sweep: RACES */

void Races_Load(void)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  DAT_0058f2e0 = Cbin_CountEntries(s_RACES_00548d9c,&DAT_00532c10);
  Mem_AllocZeroTagged(&DAT_0058f2e4,DAT_0058f2e0 * 0x24,4,s_RACE_DATA_00548d90,0xd520);
  Mem_AllocZeroTagged(&DAT_0058f2e8,DAT_0058f2e0 << 4,4,s_RACE_RELATION_00548d80,0xd520);
  Cbin_SelectGroup(s_RACES_00548d9c);
  uVar3 = 0;
  piVar2 = DAT_0058f2e8;
  iVar4 = DAT_0058f2e4;
  if (DAT_0058f2e0 != 0) {
    do {
      Cbin_FindParam_Global(&DAT_00532c10,iVar4,0x20,0,4,1);
      __strupr(iVar4);
      bVar1 = (byte)uVar3;
      *(uint *)(iVar4 + 0x20) = uVar3;
      uVar3 = uVar3 + 1;
      *piVar2 = 1 << (bVar1 & 0x1f);
      iVar4 = iVar4 + 0x24;
      piVar2 = piVar2 + 4;
    } while (uVar3 < DAT_0058f2e0);
  }
  return;
}

