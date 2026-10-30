
void FUN_0044f550(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int local_c;
  
  uVar5 = DAT_005b399c + 1 >> 1;
  local_c = 100;
  uVar3 = 0;
  FUN_00452180(1);
  puVar4 = &DAT_005b339c;
  iVar1 = FUN_0044f530(uVar5);
  uVar2 = 0;
  iVar6 = iVar1;
  if (DAT_005b399c != 0) {
    do {
      if (uVar5 <= uVar3) {
        local_c = local_c + 300;
        uVar3 = 0;
        iVar6 = iVar1;
      }
      FUN_0044f3f0(&DAT_005b3a38 + (uint)*puVar4 * 0x44,(int)(short)puVar4[1],(int)(short)puVar4[2],
                   local_c,iVar6,(-(uint)(*puVar4 != DAT_005b8f54) & 0xff413bbf) + 0xffc440);
      iVar6 = iVar6 + 0x40;
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar2 < DAT_005b399c);
  }
  return;
}

