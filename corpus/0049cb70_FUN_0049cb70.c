
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049cb70(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  undefined4 uStack_4;
  
  local_10 = 0;
  local_14 = 0;
  local_c = 0;
  if (DAT_00603f74 == 0) {
    iVar1 = c_fopen(param_1,&DAT_0053cab8);
    if (iVar1 == 0) {
      MessageBoxA(GLBL_WindowHandle_,s_Could_not_open_file_for_writing_0055d9b8,
                  s_mem_DumpStatsToFile_0055d9d8,0);
      return;
    }
    iVar2 = param_2;
    if ((param_3 == -1) || (iVar2 = param_3, param_2 <= param_3)) {
      do {
        FUN_0049c910(iVar1,param_2,&local_10,&local_14,&local_c);
        param_2 = param_2 + 1;
      } while (param_2 <= iVar2);
    }
    uStack_4 = 0;
    local_8 = local_14;
    c_fprintf(iVar1,s_Max_Pointers_used____d__Total_Me_0055d974,local_10,local_14,
              (double)((float)local_14 * _DAT_0052e6cc));
    uStack_4 = 0;
    local_8 = local_c;
    c_fprintf(iVar1,s_Bytes_Wasted____d_bytes____2fk__0055d950,local_c,
              (double)((float)local_c * _DAT_0052e6c8));
    c_fclose(iVar1);
  }
  return;
}

