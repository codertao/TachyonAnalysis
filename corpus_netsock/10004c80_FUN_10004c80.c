
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10004c80(int param_1,u_short *param_2)

{
  int iVar1;
  uint uVar2;
  u_long local_14;
  sockaddr local_10;
  
  DAT_100096b4 = socket(2,2,0);
  if (DAT_100096b4 == 0xffffffff) {
    return 1;
  }
  local_14 = 1;
  iVar1 = ioctlsocket(DAT_100096b4,-0x7ffb9982,&local_14);
  if (iVar1 != -1) {
    local_10.sa_data[2] = '\0';
    local_10.sa_data[3] = '\0';
    local_10.sa_data[4] = '\0';
    local_10.sa_data[5] = '\0';
    local_10.sa_family = 2;
    if (param_1 == 1) {
      local_10.sa_data._0_2_ = htons(*param_2);
      iVar1 = bind(DAT_100096b4,&local_10,0x10);
      if (iVar1 == -1) {
        return 1;
      }
    }
    else {
      uVar2 = (uint)*param_2;
      local_10.sa_data._0_2_ = htons(*param_2);
      iVar1 = bind(DAT_100096b4,&local_10,0x10);
      while (iVar1 == -1) {
        iVar1 = WSAGetLastError();
        if (iVar1 != 0x2740) {
          return 1;
        }
        uVar2 = uVar2 + _DAT_100076a4;
        local_10.sa_data._0_2_ = htons((u_short)uVar2);
        iVar1 = bind(DAT_100096b4,&local_10,0x10);
      }
      *param_2 = (u_short)uVar2;
    }
    return 0;
  }
  return 1;
}

