
undefined4 netsock_Init(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10019880;
                    /* 0x1000  18  netsock_Init */
  for (iVar1 = 0x109; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  DAT_10019880 = 1;
  DAT_10019c5c = malloc(0x10000);
  DAT_10019c60 = malloc(0x10000);
  DAT_10019c64 = 0x10000;
  DAT_100199dc = malloc(0x21c0);
  puVar2 = DAT_100199dc;
  for (iVar1 = 0x870; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_10019c70._2_2_ = 0xf22;
  DAT_10019c70._0_2_ = 0xf22;
  return 0;
}

