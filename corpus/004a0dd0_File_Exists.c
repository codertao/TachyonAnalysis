
/* _lopen/_lclose probe */

undefined4 File_Exists(LPCSTR param_1)

{
  HFILE hFile;
  
  hFile = _lopen(param_1,0);
  if (hFile == -1) {
    GLBL_some_file_failure = 1;
    return 0;
  }
  GLBL_some_file_failure = 0;
  _lclose(hFile);
  return 1;
}

