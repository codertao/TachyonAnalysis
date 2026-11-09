
uint FUN_10004af0(void)

{
  int iVar1;
  int local_8;
  uint local_4;
  
  local_8 = 4;
  iVar1 = getsockopt(DAT_100096b4,0xffff,0x1001,(char *)&local_4,&local_8);
  return -(uint)(iVar1 != -1) & local_4;
}

