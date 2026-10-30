
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467330(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 local_80 [128];
  
  FUN_00452180();
  uVar1 = (uint)*(byte *)(*DAT_005b2770 + 4);
  FUN_0041f6e0(DAT_005b276c,0x14,0x14,0xa0,200,0x80,DAT_005b2770,s_BDF_EDITOR_0054a5a0,0xffff00,
               80000,2);
  str_sprintf(local_80,s_BDF___s_0054a598,DAT_005b9084);
  FUN_0048e970(local_80,DAT_005b2770,0x1c,0x2c,0xffffff,0xffff,0x10000,2);
  puVar3 = local_80;
  uVar4 = CONCAT44(*(undefined4 *)(DAT_005b9084 + 0xb4),s_R__R____d_0054a58c);
  str_sprintf();
  FUN_0048e970(local_80,DAT_005b2770,0x1c,uVar1 + 0x2c,0xff0000,0xffff,0x10000,2,puVar3,uVar4);
  iVar2 = uVar1 + 0x2c + uVar1;
  str_sprintf(local_80,s_G__G____d_0054a580,*(undefined4 *)(DAT_005b9084 + 0xb8));
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar2,0xff00,0xffff,0x10000,2);
  iVar2 = iVar2 + uVar1;
  puVar3 = local_80;
  uVar4 = CONCAT44(*(undefined4 *)(DAT_005b9084 + 0xbc),s_B__B____d_0054a574);
  str_sprintf();
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar2,0xff,0xffff,0x10000,2,puVar3,uVar4);
  iVar2 = iVar2 + uVar1;
  str_sprintf(local_80,s_AMB__A____d_0054a568,*(int *)(DAT_005b9084 + 0xc0) << 1);
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar2,0xc4c4c4,0xffff,0x10000,2);
  puVar3 = local_80;
  uVar4 = CONCAT44(*(undefined4 *)(DAT_005b9084 + 0xac),s_GAM__4____d_0054a55c);
  iVar2 = iVar2 + uVar1;
  str_sprintf();
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar2,0xc0c0c0,0xffff,0x10000,2,puVar3,uVar4);
  iVar2 = iVar2 + uVar1;
  str_sprintf(local_80,s_SAT__5____d_0054a550,*(undefined4 *)(DAT_005b9084 + 0xb0));
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar2,0xc0c0c0,0xffff,0x10000,2);
  iVar2 = iVar2 + uVar1;
  str_sprintf(local_80,s_Y__Y____2f__P__P____2f_0054a538,
              (double)((float)*(int *)(DAT_005b9084 + 0x1c) * _DAT_0052e6c4 * _DAT_0052e5d8),
              (double)((float)*(int *)(DAT_005b9084 + 0x20) * _DAT_0052e6c4 * _DAT_0052e5d8));
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar2,0xffff00,0xffff,0x10000,2);
  iVar2 = iVar2 + uVar1;
  str_sprintf(local_80,s_LR__1____d_0054a52c,*(undefined4 *)(DAT_005b9084 + 0x138));
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar2,0xff0000,0xffff,0x10000,2);
  iVar2 = iVar2 + uVar1;
  str_sprintf(local_80,s_LG__2____d_0054a520,*(undefined4 *)(DAT_005b9084 + 0x13c));
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar2,0xff00,0xffff,0x10000,2);
  puVar3 = local_80;
  uVar4 = CONCAT44(*(undefined4 *)(DAT_005b9084 + 0x140),s_LB__3____d_0054a514);
  str_sprintf();
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar2 + uVar1,0xff,0xffff,0x10000,2,puVar3,uVar4);
  return;
}

