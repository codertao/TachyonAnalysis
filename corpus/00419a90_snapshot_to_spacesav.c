
void snapshot_to_spacesav(void)

{
  int iVar1;
  
  iVar1 = lcreat_file_and_do_error_stuff(s_space_sav_005348f4);
  if (iVar1 != -1) {
    save_to_open_file(GLBL_spacesav,0x1c0);
    close_glbl_open_file();
    return;
  }
  return;
}

