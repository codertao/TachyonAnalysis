
void read_file_to_bin(LPVOID dst,UINT len_bytes)

{
  _lread(GLBL_filehandle,dst,len_bytes);
  return;
}

