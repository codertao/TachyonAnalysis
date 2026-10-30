
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d470(void)

{
  int iVar1;
  undefined1 local_80 [128];
  
  iVar1 = FUN_0049d0a0();
  str_sprintf(local_80,s_Sound_Mem____2_2fk__2_2f_megs_00535038,
              (double)((float)iVar1 * _DAT_0052e6c8),(double)((float)iVar1 * _DAT_0052e6cc));
  FUN_00452180(1);
  str_sprintf(local_80,s_FRAMERATE___2_2f_00534f88,(double)_DAT_006c900c);
  FUN_0048e970(local_80,DAT_005b2770,10,0x28,0xffff00,0xffff,0x10000,2);
  return;
}

