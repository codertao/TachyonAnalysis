
undefined4 __cdecl FUN_10005280(u_long param_1)

{
  int iVar1;
  u_long uVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_100096b8 == 0) {
    return 0;
  }
  uVar2 = ntohl(param_1);
  iVar4 = 0;
  iVar3 = DAT_100096b8;
  do {
    iVar1 = iVar3 + -1;
    while( true ) {
      if (iVar1 < iVar4) {
        return 0;
      }
      iVar3 = iVar1 + iVar4 >> 1;
      if (uVar2 <= (uint)((&DAT_100076ac)[iVar3 * 2] + (&DAT_100076a8)[iVar3 * 2])) break;
      iVar4 = iVar3 + 1;
    }
  } while (uVar2 < (uint)(&DAT_100076a8)[iVar3 * 2]);
  return 1;
}

