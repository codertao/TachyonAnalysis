
void FUN_0047b9c0(char *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00440d90(g_MapUiCtx,s_shdw_12_pcx_00535974);
  DAT_00571d20 = iVar1 + 0x20;
  if ((param_1 == (char *)0x0) || (iVar1 == 0)) {
    puVar2 = &DAT_00571ca0;
    for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  else if (DAT_00571d68 != param_3) {
    puVar2 = &DAT_00571ca0;
    for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    _strncpy((char *)&DAT_00571ca0,param_1,0x7f);
    if (param_2 != (undefined4 *)0x0) {
      DAT_00571d5c = *param_2;
      DAT_00571d60 = param_2[1];
    }
    DAT_00571d68 = param_3;
    DAT_00571d64 = 0x19;
    DAT_00571d58 = 0xa3d;
    DAT_00571d50 = 0x147a;
    return;
  }
  return;
}

