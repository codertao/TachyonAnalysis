
uint FUN_10005830(void)

{
  int iVar1;
  uint local_4;
  
  iVar1 = ioctlsocket(DAT_100096b4,0x4004667f,&local_4);
  return -(uint)(iVar1 != -1) & local_4;
}

