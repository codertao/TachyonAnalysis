
undefined * get_actual_filename_from_pff(undefined4 param_1)

{
  undefined1 local_100 [256];
  
  __splitpath(param_1,0,0,&GLBL_pff_found_entry,local_100);
  __makepath(&GLBL_pff_found_entry,0,0,&GLBL_pff_found_entry,local_100);
  return &GLBL_pff_found_entry;
}

