
void FUN_0049cca0(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_global_mem_pool_root;
  if (DAT_00603f74 == 0) {
    iVar2 = c_fopen(param_1,&DAT_0053cab8);
    if (iVar2 == 0) {
      MessageBoxA(GLBL_WindowHandle_,s_Could_not_open_file_for_writing_0055d9b8,
                  s_mem_DumpStatsToFile_0055d9d8,0);
      return;
    }
    c_fprintf(iVar2,s__MEMMGR__0055da04);
    PTR_global_mem_pool_root = (undefined *)&DAT_00603f60;
    FUN_0049cb10(iVar2);
    c_fprintf(iVar2,s__SYSMEM__0055d9f8);
    PTR_global_mem_pool_root = (undefined *)&DAT_00603f20;
    FUN_0049cb10(iVar2);
    c_fprintf(iVar2,s__TEMPMEM__0055d9ec);
    PTR_global_mem_pool_root = (undefined *)&DAT_00603f40;
    FUN_0049cb10(iVar2);
    PTR_global_mem_pool_root = puVar1;
    c_fclose(iVar2);
  }
  return;
}

