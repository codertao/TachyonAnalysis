
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424ee0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_00564ae4 != 0) && (DAT_005b8f48 != 0)) {
    iVar1 = FUN_004a2eb0(param_2);
    if (iVar1 != 0) {
      FUN_0049c840(iVar1,s_FOGPCX_00535b88);
      FUN_0049c670(iVar1,0xcccc);
      FUN_004b99a0(0,iVar1,_DAT_00603100,DAT_00603104);
      iVar2 = FUN_004ad610(&DAT_00602e00);
      if (iVar2 != 0) {
        FUN_0049c840(iVar1,s_FOGPALREF_00535b7c);
        FUN_0049c670(iVar1,0xcccc);
        FUN_004b9a10(0,iVar2);
      }
    }
    FUN_004b91a0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                 *(undefined4 *)(param_1 + 0x38));
    FUN_004b91c0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x2c));
    FUN_004b91e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44));
    FUN_004b9170(1);
  }
  return;
}

