
/* sweep: NEBULA_CLIP */

void SbLobby_DrawNebula(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_6c [8];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_8;
  
  puVar7 = &DAT_005a67a0;
  puVar8 = local_6c;
  for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  piVar1 = (int *)Starbase_FindFont(s_NEBULA_CLIP_0054e8fc);
  if ((DAT_005b9084 != 0) && (piVar1 != (int *)0x0)) {
    uVar2 = (uint)((longlong)piVar1[1] * (longlong)DAT_005a67e4) >> 0x10 |
            (int)((ulonglong)((longlong)piVar1[1] * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    uVar3 = (uint)((longlong)*piVar1 * (longlong)DAT_005a67e4) >> 0x10 |
            (int)((ulonglong)((longlong)*piVar1 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    uVar4 = (uint)((longlong)piVar1[3] * (longlong)DAT_005a67e4) >> 0x10 |
            (int)((ulonglong)((longlong)piVar1[3] * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    local_8 = piVar1[2];
    uVar5 = (uint)((longlong)local_8 * (longlong)DAT_005a67e4) >> 0x10 |
            (int)((ulonglong)((longlong)local_8 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    if ((int)uVar2 < (int)local_48) {
      uVar2 = local_48;
    }
    if ((int)uVar3 < (int)local_4c) {
      uVar3 = local_4c;
    }
    if ((int)local_40 < (int)uVar4) {
      uVar4 = local_40;
    }
    if ((int)local_44 < (int)uVar5) {
      uVar5 = local_44;
    }
    Viewport_Set(uVar3,uVar2,uVar5,uVar4,1);
    DAT_005a67d4 = local_38;
    DAT_005a67d8 = local_34;
    DAT_005a67dc = local_30;
    DAT_005a67e0 = local_2c;
    copy_str32_to_some_global(&DAT_005a67a0);
    TitleBg_Draw();
    Viewport_Set(local_4c,local_48,local_44,local_40,1);
    copy_str32_to_some_global(&DAT_005a67a0);
  }
  return;
}

