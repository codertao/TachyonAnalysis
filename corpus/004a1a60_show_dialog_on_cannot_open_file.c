
void show_dialog_on_cannot_open_file(LPCSTR filename,LPCSTR param_2)

{
  CHAR str_msg [128];
  
  if (GLBL_open_file_error_flag != 0) {
    if (GLBL_some_save_or_log_cb != (code *)0x0) {
      (*GLBL_some_save_or_log_cb)(filename,param_2);
      return;
    }
    str_sprintf(str_msg,s_Cannot_open_file__s_0053f368,filename);
    MessageBoxA(GLBL_WindowHandle_,str_msg,param_2,0);
  }
  return;
}

