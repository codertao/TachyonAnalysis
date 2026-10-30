
/* _lopen/_lclose probe */

undefined4 File_Exists(LPCSTR param_1)

{
  HFILE hFile;
  
  hFile = _lopen(param_1,0);
  if (hFile == -1) {
    DAT_006038b8 = 1;
    return 0;
  }
  DAT_006038b8 = 0;
  _lclose(hFile);
  return 1;
}

