
HFILE FUN_004a0e60(LPCSTR param_1)

{
  GLBL_filehandle = _lopen(param_1,1);
  if (GLBL_filehandle == -1) {
    GLBL_some_file_failure = 1;
    return -1;
  }
  DAT_006038b0 = 0;
  DAT_00603900 = 0;
  GLBL_some_file_failure = 0;
  return GLBL_filehandle;
}

