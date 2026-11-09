
undefined4 netsock_Close(void)

{
  undefined4 uVar1;
  
                    /* 0x12a0  2  netsock_Close */
  uVar1 = netsock_CloseTCPIP();
  DAT_10019880 = 0;
  free(DAT_10019c5c);
  free(DAT_10019c60);
  free(DAT_100199dc);
  return uVar1;
}

