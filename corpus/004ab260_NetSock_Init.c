
/* sweep */

undefined4 NetSock_Init(void)

{
  netsock_Init();
  DAT_0055e3e0 = 1;
  DAT_005649a0 = Mem_AllocTemp(0x8000,s_Net_Message_Buffer_0055e8b0);
  return 0;
}

