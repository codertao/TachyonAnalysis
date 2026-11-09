
int FUN_100057f0(void)

{
  int iVar1;
  
  if (DAT_10019858 != 0) {
    iVar1 = closesocket(DAT_100096b4);
    if (iVar1 != 0) {
      iVar1 = WSAGetLastError();
      return iVar1;
    }
    iVar1 = FUN_10004c80(DAT_100076a0,(u_short *)&DAT_10019858);
    if (iVar1 == 1) {
      iVar1 = WSAGetLastError();
      return iVar1;
    }
  }
  return 0;
}

