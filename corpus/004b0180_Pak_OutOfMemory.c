
/* sweep */

void Pak_OutOfMemory(void)

{
  MessageBoxA(GLBL_WindowHandle_,s_Out_of_memory__0055ec00,s_pak_AddPcxImages_0055ec10,0);
  Mem_DumpStatsToFile(s_MEMSTATS_TXT_0055ebf0);
  Sys_FatalExit();
  return;
}

