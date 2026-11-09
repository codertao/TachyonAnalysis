
int FUN_10004bd0(void)

{
  int iVar1;
  
  iVar1 = setsockopt(DAT_100096b4,0xffff,0x1002,&stack0x00000004,4);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    return iVar1;
  }
  return 0;
}

