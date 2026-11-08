
void save_to_open_file(LPCCH bindata,UINT len)

{
  _lwrite(GLBL_filehandle,bindata,len);
  return;
}

