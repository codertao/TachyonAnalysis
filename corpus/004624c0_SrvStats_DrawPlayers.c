
/* sweep */

uint SrvStats_DrawPlayers(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_4;
  
  iVar2 = 10;
  Gfx_Lock(1);
  uVar1 = DAT_005897e0 / 0x19;
  local_4 = DAT_005897e0 / 0x19;
  if (DAT_005897e0 % 0x19 != 0) {
    local_4 = local_4 + 1;
  }
  if (local_4 != 0) {
    iVar4 = 0;
    uVar3 = DAT_005897e0;
    iVar5 = DAT_006af660;
    do {
      uVar1 = uVar3;
      if (0x19 < uVar3) {
        uVar1 = 0x19;
      }
      SrvStats_DrawPlayerRow(iVar2,0x3c,uVar1,iVar5,iVar4);
      iVar5 = iVar5 + 13000;
      uVar3 = uVar3 - 0x19;
      iVar2 = iVar2 + 0x78;
      iVar4 = iVar4 + 0x19;
      local_4 = local_4 - 1;
      uVar1 = 0;
    } while (local_4 != 0);
  }
  return uVar1;
}

