
/* MSG_PLAYERDATA(3) header + callback 0x6af59c body */

void NetCli_WritePlayerData(void)

{
  undefined2 *puVar1;
  
  puVar1 = DAT_006af5d4;
  *DAT_006af5d4 = 3;
  *(undefined4 *)(puVar1 + 2) = DAT_006af608;
  *(undefined4 *)(puVar1 + 4) = DAT_006af640;
  *(undefined4 *)(puVar1 + 6) = DAT_006af620;
  DAT_006af5d4 = DAT_006af5d4 + 8;
  if (DAT_006af59c != (code *)0x0) {
    DAT_006af5d4 = (undefined2 *)(*DAT_006af59c)(DAT_006af5d4);
  }
  puVar1[1] = (short)DAT_006af5d4 - (short)puVar1;
  return;
}

