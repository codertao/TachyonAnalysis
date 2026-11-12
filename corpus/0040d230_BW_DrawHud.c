
/* sweep: RANK/EXP/CREDITS/BASE TECH */

void BW_DrawHud(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_80 [128];
  
  Loadout_DrawPanel();
  uVar4 = DAT_005a67cc;
  uVar3 = DAT_005a67c8;
  uVar2 = DAT_005a67c4;
  uVar1 = DAT_005a67c0;
  if (DAT_005b9020 != 0) {
    Viewport_SetScaled(0,0,0x27f,0x1df,1);
    copy_str32_to_some_global(&DAT_005a67a0);
    Gfx_Lock(1);
    Ui_DrawBox(DAT_005b97a8,5,0,0x276,0x19,0x80,DAT_005b97a0,0,0xffff00,80000,2);
    uVar5 = BW_RankName(DAT_005b9020,DAT_005b9020);
    str_sprintf(local_80,s_RANK___s___d__00533640,uVar5);
    Text_DrawAligned(local_80,DAT_005b97a0,0x19,7,&DAT_006060ff,0xffff,0x10000,2);
    str_sprintf(local_80,s_EXP___d__d_00533634,DAT_005b9018,DAT_005b901c);
    Text_DrawAligned(local_80,DAT_005b97a0,0xc3,7,&DAT_006060ff,0xffff,0x10000,2);
    uVar5 = Credits_Format(DAT_005b9024,*(undefined4 *)(DAT_005b1f0c + 0x6c0));
    str_sprintf(local_80,s_CREDITS___d___00533624,uVar5);
    Text_DrawAligned(local_80,DAT_005b97a0,0x127,7,&DAT_006060ff,0xffff,0x10000,2);
    str_sprintf(local_80,s_BASE_TECH___d_00533614,DAT_005b9030);
    Text_DrawAligned(local_80,DAT_005b97a0,0x18b,7,&DAT_006060ff,0xffff,0x10000,2);
    str_sprintf(local_80,s_EXP___d__d_00533634,DAT_005b9028,DAT_005b902c);
    Text_DrawAligned(local_80,DAT_005b97a0,0x1ef,7,&DAT_006060ff,0xffff,0x10000,2);
    Viewport_Set(uVar1,uVar2,uVar3,uVar4,1);
    copy_str32_to_some_global(&DAT_005a67a0);
  }
  return;
}

