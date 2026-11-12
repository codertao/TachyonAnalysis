
/* CRT */

undefined4 __commit(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_006c9e80 <= param_1) {
LAB_004c63a8:
    puVar4 = (undefined4 *)__errno();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_006c9d80)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_004c63a8;
  __lock_fhandle(param_1);
  if ((*(byte *)((&DAT_006c9d80)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)__get_osfhandle(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar6 = 0;
    if (DVar2 == 0) goto LAB_004c639d;
    pDVar3 = (DWORD *)___doserrno();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)__errno();
  *puVar4 = 9;
  uVar6 = 0xffffffff;
LAB_004c639d:
  __unlock_fhandle(param_1);
  return uVar6;
}

