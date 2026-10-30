
int FUN_004c57ef(undefined4 param_1,int param_2)

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
  
  FUN_004bd340();
  iVar7 = 0;
  iVar1 = FUN_004be8c6();
  if ((iVar1 == -1) || (iVar1 = FUN_004be8c6(), iVar1 == -1)) {
    iVar7 = -1;
  }
  else {
    param_2 = param_2 - iVar1;
    if (param_2 < 1) {
      if (param_2 < 0) {
        uStackY_20 = 0x4c58c0;
        FUN_004be8c6();
        uStackY_20 = param_1;
        uStackY_24 = 0x4c58c8;
        hFile = (HANDLE)FUN_004c572c();
        BVar4 = SetEndOfFile(hFile);
        iVar7 = (BVar4 != 0) - 1;
        if (iVar7 == -1) {
          puVar3 = (undefined4 *)FUN_004c4e11();
          *puVar3 = 0xd;
          DVar5 = GetLastError();
          pDVar6 = (DWORD *)FUN_004c4e1a();
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
      FUN_004c71e4();
      do {
        uStackY_20 = 0x4c587a;
        iVar1 = FUN_004c4e88();
        if (iVar1 == -1) {
          piVar2 = (int *)FUN_004c4e1a();
          if (*piVar2 == 5) {
            puVar3 = (undefined4 *)FUN_004c4e11();
            *puVar3 = 0xd;
          }
          iVar7 = -1;
          break;
        }
        param_2 = param_2 - iVar1;
      } while (0 < param_2);
      FUN_004c71e4();
    }
    uStackY_20 = 0x4c5906;
    FUN_004be8c6();
  }
  return iVar7;
}

