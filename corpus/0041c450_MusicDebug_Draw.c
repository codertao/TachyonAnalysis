
/* sweep */

void MusicDebug_Draw(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_80 [128];
  
  Gfx_Lock(1);
  bVar1 = *(byte *)(*DAT_005b2770 + 4);
  iVar4 = 0x2c;
  Ui_DrawBox(DAT_005b276c,0x14,0x14,300,200,0x80,DAT_005b2770,s_MUSIC_DEBUG_00534d20,0xffff00,80000,
             2);
  uVar3 = 0;
  do {
    uVar2 = MusicVar_FindName(uVar3);
    uVar2 = MusicVar_Get(uVar3,uVar2);
    str_sprintf(local_80,s_VAR__2d____8d___s__00534d08,uVar3,uVar2);
    Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar4,0x40ffff,0xffff,0x10000,2);
    iVar4 = iVar4 + (uint)bVar1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  uVar2 = MusicVar_FindName(0xf);
  uVar2 = MusicVar_Get(0xf,uVar2);
  str_sprintf(local_80,s_VAR__2d____8d___s__00534d08,0xf,uVar2);
  Text_DrawAligned(local_80,DAT_005b2770,0x1c,iVar4,0x40ffff,0xffff,0x10000,2);
  return;
}

