
/* sweep */

uint NetSock_GetServerId(void)

{
  int iVar1;
  
  iVar1 = netsock_GetServerId(&DAT_0055e400);
  return -(uint)(iVar1 != 0) & 0xfffffffe;
}

