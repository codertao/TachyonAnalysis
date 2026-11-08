
void load_sbf_and_bin(undefined4 param_1,undefined4 param_2)

{
  undefined1 binname [16];
  undefined1 sbfname [16];
  
  filename_to_base_name(param_1);
  str_sprintf(sbfname,s__s_sbf_00548670,param_1);
  str_sprintf(binname,s__s_bin_00548668,param_1);
  actual_load_sbf_and_bin(sbfname,binname,param_2);
  set_some_glbl_scalar(GLBL_spacesav[0x53]);
  return;
}

