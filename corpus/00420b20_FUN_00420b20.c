
void FUN_00420b20(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  char *local_3c;
  undefined2 local_38;
  ushort uStack_36;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28 [10];
  
  puVar2 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,&DAT_00535990,s_QUITTING_FAIL_005359b8);
  local_38 = 0;
  uStack_36 = 0;
  local_34 = 0;
  uStack_32 = 0;
  local_30 = 0;
  local_2c = 0;
  local_3c = DAT_005b218c;
  pcVar7 = DAT_005b218c;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  puVar8 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_28[0] = 0x10000;
  local_28[1] = 0x10000;
  iVar3 = Text_GlyphHeight(*puVar2,DAT_005b2180,2,local_28);
  local_28[0] = 0x10000;
  local_28[1] = 0x10000;
  iVar4 = Text_GlyphHeight(*puVar2,DAT_005b2184,2,local_28);
  FUN_0041f6e0(DAT_005b2188,0xa0,0x46,0x140,0x78,0x80,DAT_005b2184,*puVar2,0xff0000,0x10000,2);
  local_38 = (undefined2)((uint)(DAT_005a67a8 * 300) / 0x280);
  iVar4 = iVar4 * 2 + 0x46;
  local_34 = (undefined2)((uint)(DAT_005a67a8 * 0xaa) / 0x280);
  local_28[0] = (DAT_005a67a8 * local_28[0]) / 0x280;
  local_28[1] = (DAT_005a67a8 * local_28[1]) / 0x1e0;
  uStack_32 = (undefined2)iVar4;
  local_30 = CONCAT22(local_30._2_2_,(short)iVar3);
  puVar2 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,&DAT_00535990,s_EXIT_FAIL_005359ac);
  Text_WordWrap(*puVar2,DAT_005b2180,&local_3c,2,local_28);
  uVar6 = 0;
  pcVar7 = local_3c;
  if (uStack_36 != 0) {
    do {
      FUN_0048e970(pcVar7,DAT_005b2180,0xaa,iVar4,0xffff00,0xffff,0x10000,2);
      uVar5 = 0xffffffff;
      iVar4 = iVar4 + iVar3;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + ~uVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uStack_36);
  }
  puVar2 = (undefined4 *)Rtxt_Lookup(DAT_005a6140,&DAT_00535990,&DAT_005359a8);
  FUN_0048e970(*puVar2,DAT_005b2180,0x140,iVar4,0xff0000,0xffff,0x10000,6);
  return;
}

