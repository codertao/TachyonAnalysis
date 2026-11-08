
void load_or_init_spacesav(void)

{
  int iVar1;
  
  iVar1 = get_file_len(s_space_sav_005348f4);
  if (iVar1 != 0x1c0) {
    init_spacesav();
    return;
  }
  openfile(s_space_sav_005348f4);
  read_file_to_bin(GLBL_spacesav,0x1c0);
  close_glbl_open_file();
  return;
}

