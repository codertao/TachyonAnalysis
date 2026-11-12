
/* sweep */

void Hud_DrawText(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  Gfx_Lock(1);
  Text_DrawAligned(param_1,param_2,DAT_005b0140 + param_3,DAT_005b0144 + param_4,param_5,0xffff,
                   0x10000,param_7);
  return;
}

