
HFILE lcreat_file_and_do_error_stuff(LPCSTR file_name)

{
  GLBL_filehandle = _lcreat(file_name,0);
  if (GLBL_filehandle == -1) {
    show_dialog_on_cannot_open_file(file_name,s_file_Create_0055e060);
    GLBL_some_file_failure = 1;
    return -1;
  }
  DAT_006038b0 = 0;
  DAT_00603900 = 0;
  GLBL_some_file_failure = 0;
  return GLBL_filehandle;
}

