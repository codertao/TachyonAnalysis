
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bdc64(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_004bdd09();
  if (DAT_00564fb8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00564fb4 = 1;
  DAT_00564fb0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_006caed0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_006caecc - 4), DAT_006caed0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_006caed0 <= puVar1);
    }
    FUN_004bdd1b(&DAT_00532018,&DAT_00532020);
  }
  FUN_004bdd1b(&DAT_00532024,&DAT_00532028);
  if (param_3 == 0) {
    DAT_00564fb8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_004bdd12();
  return;
}

