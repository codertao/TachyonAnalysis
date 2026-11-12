
/* sweep */

undefined4 Pcx_Save(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_80 [128];
  
  iVar1 = lcreat_file_and_do_error_stuff(param_1);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  Pcx_BuildHeader(local_80);
  save_to_open_file(local_80,0x80);
  Pcx_WriteImage(param_2);
  Pcx_WritePalette();
  close_glbl_open_file();
  return 0;
}

