
undefined4 probably_load_from_pff(undefined4 filename,int maybe_pff)

{
  int iVar1;
  undefined4 size_bytes;
  undefined4 uVar2;
  
  iVar1 = Pff_OpenEntry(filename,maybe_pff);
  if (iVar1 == 0) {
    *(undefined4 *)(maybe_pff + 0xb4) = 1;
    return 0;
  }
  size_bytes = Pff_SeekToEntry(0,2,maybe_pff);
  Pff_SeekToEntry(0,0,maybe_pff);
  *(undefined4 *)(maybe_pff + 0xb0) = size_bytes;
  GLBL_last_file_read_bytes = size_bytes;
  uVar2 = mem_GetMemEx_probably_alloc(size_bytes,4,0,s_PFF_LOADED_FILE_0055e140);
  read_some_bytes_and_update_seek_ptr(uVar2,size_bytes,maybe_pff);
  if ((**(byte **)(maybe_pff + 0x9c) & 1) != 0) {
    decrypt_str_xor_rol_312a4ce(uVar2,size_bytes);
  }
  *(undefined4 *)(maybe_pff + 0xb4) = 0;
  return uVar2;
}

