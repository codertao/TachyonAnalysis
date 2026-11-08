
/* type 7 {u8 reason} */

void NetSrv_WriteKick(undefined1 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_006af670;
  *DAT_006af670 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 1) = param_1;
  *(undefined2 *)puVar1 = 7;
  *(undefined2 *)((int)puVar1 + 2) = 8;
  DAT_006af670 = DAT_006af670 + 2;
  return;
}

