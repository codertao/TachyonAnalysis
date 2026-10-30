
void FUN_004b63c0(int param_1)

{
  undefined1 local_80 [128];
  
  str_sprintf(local_80,s_Listing_not_available_0055efb4);
  str_sprintf(&DAT_006692e0,&DAT_0055efac,0x4c,local_80);
  FUN_004b68a0(&DAT_006692e0,0,param_1,7);
  if (DAT_0066921c != 0) {
    str_sprintf(local_80,s__s_not_found_00535728,DAT_0066921c);
    str_sprintf(&DAT_006692e0,&DAT_0055efac,0x4c,local_80);
    FUN_004b68a0(&DAT_006692e0,0,param_1 + 1,7);
  }
  return;
}

