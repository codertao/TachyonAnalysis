
/* sweep: PLAYERS ONLINE */

void PlayerList_Draw(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_a4 [64];
  undefined4 local_64 [25];
  
  uVar4 = DAT_005a67cc;
  uVar3 = DAT_005a67c8;
  uVar2 = DAT_005a67c4;
  uVar1 = DAT_005a67c0;
  if (DAT_00590d58 != 0) {
    Gfx_Lock(1);
    Ui_DrawBox(DAT_00590d54,0x118,0x20,0x154,0xf5,0x80,DAT_00590d48,s_PLAYERS_005484dc,0xffff00,
               80000,2);
    puVar8 = &GLBL_some_str;
    puVar9 = local_64;
    for (iVar7 = 0x19; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    Viewport_SetScaled(0x118,0x20,0x26a,0x115,1);
    copy_str32_to_some_global(&DAT_005a67a0);
    uVar5 = PlayerList_CountActive();
    str_sprintf(local_a4,s_PLAYERS_ONLINE___d_005484c8,uVar5);
    Text_DrawAligned(local_a4,DAT_00590d48,0x11c,0x38,0xffffff,0xffff,0x10000,2);
    PlayerList_DrawRows(DAT_00590d5c + 0x38);
    piVar6 = (int *)Rtxt_Lookup(DAT_005a6140,s_MULTI_STRINGS_005484a4,s_PLAYERLIST_FOOTER_005484b4);
    if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
      Text_DrawAligned(*piVar6,DAT_00590d48,0x1c2,0x111,0xff0000,0xffff,0x10000,0x26);
    }
    Viewport_Set(uVar1,uVar2,uVar3,uVar4,1);
    copy_str32_to_some_global(local_64);
  }
  return;
}

