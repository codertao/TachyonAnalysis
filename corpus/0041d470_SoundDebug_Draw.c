
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void SoundDebug_Draw(void)

{
  int iVar1;
  undefined1 local_80 [128];
  
  iVar1 = SndTrig_TotalSize();
  str_sprintf(local_80,s_Sound_Mem____2_2fk__2_2f_megs_00535038,
              (double)((float)iVar1 * _DAT_0052e6c8),(double)((float)iVar1 * _DAT_0052e6cc));
  Gfx_Lock(1);
  str_sprintf(local_80,s_FRAMERATE___2_2f_00534f88,(double)_DAT_006c900c);
  Text_DrawAligned(local_80,DAT_005b2770,10,0x28,0xffff00,0xffff,0x10000,2);
  return;
}

