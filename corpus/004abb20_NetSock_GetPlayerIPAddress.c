
/* sweep */

int NetSock_GetPlayerIPAddress(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = netsock_GetPlayerIPAddress(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  return (-(uint)(iVar1 != 0xb) & 0xfffffffd) + 4;
}

