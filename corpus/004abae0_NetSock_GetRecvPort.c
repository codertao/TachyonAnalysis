
/* sweep */

bool NetSock_GetRecvPort(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = netsock_GetRecvPort(param_1);
  return iVar1 != 0;
}

