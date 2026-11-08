
void FUN_00420900(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  uint uStack_40;
  char *local_3c;
  undefined2 local_38;
  ushort uStack_36;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28 [10];
  
  puVar2 = (undefined4 *)FUN_0049e0d0(DAT_005a6140,&DAT_00535990,s_QUITTING_HEAD_00535998);
  local_38 = 0;
  uStack_36 = 0;
  local_34 = 0;
  uStack_32 = 0;
  local_30 = 0;
  local_2c = 0;
  local_3c = DAT_005b218c;
  pcVar4 = DAT_005b218c;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  puVar7 = local_28;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_28[0] = 0x10000;
  local_28[1] = 0x10000;
  iVar3 = FUN_004ae560(*puVar2,DAT_005b2180,2,local_28);
  local_28[0] = 0x10000;
  local_28[1] = 0x10000;
  iVar5 = FUN_004ae560(*puVar2,DAT_005b2184,2,local_28);
  FUN_0041f6e0(DAT_005b2188,200,0x46,0xf0,100,0x80,DAT_005b2184,*puVar2,0xff0000,0x10000,2);
  local_38 = (undefined2)((uint)(DAT_005a67a8 * 0xdc) / 0x280);
  iVar5 = iVar5 * 2 + 0x46;
  local_34 = (undefined2)((uint)(DAT_005a67a8 * 0xd2) / 0x280);
  local_28[0] = (DAT_005a67a8 * local_28[0]) / 0x280;
  local_28[1] = (DAT_005a67a8 * local_28[1]) / 0x1e0;
  uStack_32 = (undefined2)iVar5;
  local_30 = CONCAT22(local_30._2_2_,(short)iVar3);
  if (*(code **)(g_ActiveRules + 0x80) == (code *)0x0) {
    pcVar4 = s_QUIT__00535988;
  }
  else {
    pcVar4 = (char *)(**(code **)(g_ActiveRules + 0x80))();
  }
  FUN_004ae5e0(pcVar4,DAT_005b2180,&local_3c,2,local_28);
  uStack_40 = 0;
  pcVar4 = local_3c;
  if (uStack_36 != 0) {
    do {
      FUN_0048e970(pcVar4,DAT_005b2180,0xd2,iVar5,0xffff00,0xffff,0x10000,2);
      uVar6 = 0xffffffff;
      iVar5 = iVar5 + iVar3;
      pcVar8 = pcVar4;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + ~uVar6;
      uStack_40 = uStack_40 + 1;
    } while (uStack_40 < uStack_36);
  }
  puVar2 = (undefined4 *)FUN_0049e0d0(DAT_005a6140,&DAT_00535990,s_YESNO_00535980);
  FUN_0048e970(*puVar2,DAT_005b2180,0x140,iVar5,0xff0000,0xffff,0x10000,6);
  return;
}

