
undefined * get_actual_filename_from_pff(undefined4 param_1)

{
  undefined1 local_100 [256];
  
  probably_find_in_pff(param_1,0,0,&GLBL_pff_found_entry,local_100);
  FUN_004bdf08(&GLBL_pff_found_entry,0,0,&GLBL_pff_found_entry,local_100);
  return &GLBL_pff_found_entry;
}

