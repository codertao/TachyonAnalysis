
int FUN_100057b0(void)

{
  int iVar1;
  
  iVar1 = closesocket(DAT_100096b4);
  if (iVar1 != 0) {
    iVar1 = WSAGetLastError();
    return iVar1;
  }
  iVar1 = WSACleanup();
  if (iVar1 != 0) {
    iVar1 = WSAGetLastError();
    return iVar1;
  }
  free(DAT_10019854);
  FUN_10005780();
  return 0;
}

