
/* MSG_STARTUPDATA(4) */

void NetSrv_WriteStartupData(int param_1)

{
  undefined2 *puVar1;
  
  puVar1 = DAT_006af670;
  *DAT_006af670 = 4;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(puVar1 + 4) = DAT_006af6e0;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 8);
  if (DAT_006af7c8 != (code *)0x0) {
    DAT_006af670 = (undefined2 *)(*DAT_006af7c8)(param_1,puVar1 + 8,*(undefined4 *)(param_1 + 0x90))
    ;
    puVar1[1] = (short)DAT_006af670 - (short)puVar1;
  }
  return;
}

