
void FUN_0049cb20(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00603f74 == 0) {
    iVar1 = c_fopen(param_1,&DAT_0053cab8);
    if (iVar1 == 0) {
      MessageBoxA(DAT_0060395c,s_Could_not_open_file_for_writing_0055d9b8,
                  s_mem_DumpStatsToFile_0055d9d8,0);
      return;
    }
    FUN_0049cb10(iVar1);
    c_fclose(iVar1);
  }
  return;
}

