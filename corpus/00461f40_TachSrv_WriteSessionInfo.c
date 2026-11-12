
/* refine: startup kind 7 (0xc): voice server u32 ip, u16 port, u8 flag (0 ip = no voice) */

void TachSrv_WriteSessionInfo(undefined4 param_1,undefined2 *param_2,short *param_3)

{
  *param_2 = 7;
  *(undefined4 *)(param_2 + 2) = DAT_006af7ec;
  param_2[4] = DAT_006af7f0;
  *(undefined1 *)(param_2 + 5) = DAT_006af7f2;
  *param_3 = *param_3 + 1;
  param_2[1] = 0xc;
  return;
}

