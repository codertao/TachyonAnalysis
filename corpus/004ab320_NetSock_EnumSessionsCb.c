
/* refine: keeps sessions whose app GUID (+0xe0) = 0x52e8c0 */

void NetSock_EnumSessionsCb(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &DAT_0052e8c0;
  piVar3 = (int *)(param_1 + 0xe0);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = NetDrv_FindSessionByGuid(param_1 + 0xd0);
    if (iVar1 == 0) {
      NetDrv_AddSession(param_1 + 0x10,param_1 + 0xd0,(int *)(param_1 + 0xe0),
                        (*(byte *)(param_1 + 4) & 8) != 0,*(undefined4 *)(param_1 + 0xc),
                        *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xf0),
                        *(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8),
                        *(undefined4 *)(param_1 + 0xfc));
    }
  }
  return;
}

