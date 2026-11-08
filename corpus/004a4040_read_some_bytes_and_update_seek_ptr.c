
void read_some_bytes_and_update_seek_ptr(undefined4 out_buf,undefined4 file_len,undefined4 *param_3)

{
  int iVar1;
  
  GLBL_filehandle = *param_3;
  iVar1 = read_file_to_bin(out_buf,file_len);
  param_3[0x2a] = param_3[0x2a] + iVar1;
  return;
}

