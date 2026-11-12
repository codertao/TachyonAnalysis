
/* sweep */

void Hud_DrawStringId(undefined4 param_1,undefined4 param_2,int param_3,int param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  
  pcVar1 = (char *)Rtxt_GetText(DAT_005a6140,param_1);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_STRING_NOT_FOUND_00536750;
  }
  Gfx_Lock(1);
  Text_DrawAligned(pcVar1,param_2,DAT_005b0140 + param_3,DAT_005b0144 + param_4,param_5,0xffff,
                   0x10000,param_7);
  return;
}

