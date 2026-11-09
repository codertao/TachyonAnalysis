
int FUN_10004b30(void)

{
  int iVar1;
  char local_4 [4];
  
  local_4[0] = '\x01';
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  iVar1 = setsockopt(DAT_100096b4,0xffff,0x1001,&stack0x00000004,4);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    return iVar1;
  }
  iVar1 = setsockopt(DAT_100096b4,0xffff,0x20,local_4,4);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    return iVar1;
  }
  return 0;
}

