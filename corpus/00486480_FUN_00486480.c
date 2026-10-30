
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486480(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  pcVar5 = s_ImageSlotIconJackPot_00557c50;
  local_10 = &DAT_0056c560;
  local_c = 0;
  cVar1 = s_ImageSlotIconJackPot_00557c50[0];
  do {
    if (cVar1 == '\0') {
      return;
    }
    iVar2 = FUN_0043a7a0(&DAT_00583420,pcVar5);
    FUN_00439cc0(&DAT_00583420,iVar2,*(undefined4 *)(iVar2 + 0x1680),0xff00ff);
    uVar6 = 0;
    local_8 = (uint)(longlong)ROUND(*(float *)(pcVar5 + 0x44) * _DAT_0052ec38 + _DAT_0052e594);
    if (local_8 != 0) {
      puVar4 = local_10 + 1;
      do {
        if (99 < local_c) {
          return;
        }
        str_sprintf(puVar4,pcVar5);
        puVar3 = local_10 + 0x11;
        puVar4 = puVar4 + 0x11;
        *local_10 = *(undefined4 *)(pcVar5 + 0x40);
        local_c = local_c + 1;
        uVar6 = uVar6 + 1;
        local_10 = puVar3;
      } while (uVar6 < local_8);
    }
    cVar1 = pcVar5[0x48];
    pcVar5 = pcVar5 + 0x48;
  } while( true );
}

