
void FUN_00499880(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint local_28 [10];
  
  puVar1 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_WINGMAN_CMD_0055d6f8,s_HEADING_0055d704);
  puVar5 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_28[0] = 0x10000;
  local_28[1] = 0x10000;
  iVar2 = Text_GlyphHeight(*puVar1,DAT_00565300,2,local_28);
  local_28[0] = 0x10000;
  local_28[1] = 0x10000;
  iVar4 = Text_GlyphHeight(*puVar1,DAT_00565300,2,local_28);
  FUN_0041f6e0(DAT_00565308,0x1db,0xbb,0xa0,0x69,0x80,DAT_00565300,*puVar1,0xff0000,0x10000,2);
  local_28[0] = (DAT_005a67a8 * local_28[0]) / 0x280;
  local_28[1] = (DAT_005a67a8 * local_28[1]) / 0x1e0;
  iVar4 = iVar4 * 2 + 0xbb;
  puVar1 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_WINGMAN_CMD_0055d6f8,s_COMMAND_1_0055d6ec);
  iVar3 = FUN_00499560(1);
  FUN_0048e970(*puVar1,DAT_00565300,0x1ea,iVar4,0xffff00,(-(uint)(iVar3 != 0) & 0x8000) + 0x7fff,
               0x10000,2);
  iVar4 = iVar4 + iVar2;
  puVar1 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_WINGMAN_CMD_0055d6f8,s_COMMAND_2_0055d6e0);
  iVar3 = FUN_00499560(2);
  FUN_0048e970(*puVar1,DAT_00565300,0x1ea,iVar4,0xffff00,(-(uint)(iVar3 != 0) & 0x8000) + 0x7fff,
               0x10000,2);
  iVar4 = iVar4 + iVar2;
  puVar1 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_WINGMAN_CMD_0055d6f8,s_COMMAND_3_0055d6d4);
  iVar3 = FUN_00499560(3);
  FUN_0048e970(*puVar1,DAT_00565300,0x1ea,iVar4,0xffff00,(-(uint)(iVar3 != 0) & 0x8000) + 0x7fff,
               0x10000,2);
  iVar4 = iVar4 + iVar2;
  puVar1 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_WINGMAN_CMD_0055d6f8,s_COMMAND_4_0055d6c8);
  iVar3 = FUN_00499560(4);
  FUN_0048e970(*puVar1,DAT_00565300,0x1ea,iVar4,0xffff00,(-(uint)(iVar3 != 0) & 0x8000) + 0x7fff,
               0x10000,2);
  iVar4 = iVar4 + iVar2;
  puVar1 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_WINGMAN_CMD_0055d6f8,s_COMMAND_5_0055d6bc);
  iVar3 = FUN_00499560(5);
  FUN_0048e970(*puVar1,DAT_00565300,0x1ea,iVar4,0xffff00,(-(uint)(iVar3 != 0) & 0x8000) + 0x7fff,
               0x10000,2);
  puVar1 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,s_WINGMAN_CMD_0055d6f8,s_COMMAND_6_0055d6b0);
  iVar3 = FUN_00499560(6);
  FUN_0048e970(*puVar1,DAT_00565300,0x1ea,iVar4 + iVar2,0xffff00,
               (-(uint)(iVar3 != 0) & 0x8000) + 0x7fff,0x10000,2);
  return;
}

