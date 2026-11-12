
/* CRT */

int __chsize_lk(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HANDLE hFile;
  BOOL BVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  int iVar7;
  undefined1 local_1008 [4064];
  undefined4 uStackY_28;
  undefined4 uStackY_24;
  undefined4 uStackY_20;
  
  __chkstk();
  iVar7 = 0;
  iVar1 = __lseek_lk();
  if ((iVar1 == -1) || (iVar1 = __lseek_lk(), iVar1 == -1)) {
    iVar7 = -1;
  }
  else {
    param_2 = param_2 - iVar1;
    if (param_2 < 1) {
      if (param_2 < 0) {
        uStackY_20 = 0x4c58c0;
        __lseek_lk();
        uStackY_20 = param_1;
        uStackY_24 = 0x4c58c8;
        hFile = (HANDLE)__get_osfhandle();
        BVar4 = SetEndOfFile(hFile);
        iVar7 = (BVar4 != 0) - 1;
        if (iVar7 == -1) {
          puVar3 = (undefined4 *)__errno();
          *puVar3 = 0xd;
          DVar5 = GetLastError();
          pDVar6 = (DWORD *)___doserrno();
          *pDVar6 = DVar5;
        }
      }
    }
    else {
      uStackY_20 = 0x4c584f;
      _memset(local_1008,0,0x1000);
      uStackY_20 = 0x8000;
      uStackY_24 = param_1;
      uStackY_28 = 0x4c585c;
      __setmode_lk();
      do {
        uStackY_20 = 0x4c587a;
        iVar1 = __write_lk();
        if (iVar1 == -1) {
          piVar2 = (int *)___doserrno();
          if (*piVar2 == 5) {
            puVar3 = (undefined4 *)__errno();
            *puVar3 = 0xd;
          }
          iVar7 = -1;
          break;
        }
        param_2 = param_2 - iVar1;
      } while (0 < param_2);
      __setmode_lk();
    }
    uStackY_20 = 0x4c5906;
    __lseek_lk();
  }
  return iVar7;
}

