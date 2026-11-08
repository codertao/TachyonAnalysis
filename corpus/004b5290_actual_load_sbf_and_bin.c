
undefined4 actual_load_sbf_and_bin(undefined4 sbf_name,LPCSTR bin_name,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (GLBL_MAYBE_AUDIO_CB_3 != (code *)0x0) {
    uVar1 = (*GLBL_MAYBE_AUDIO_CB_3)(sbf_name,bin_name,param_3);
    return uVar1;
  }
  iVar2 = actual2_load_sbf_and_bin(sbf_name,bin_name);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004b59b0(param_3);
  DAT_006af504 = 1;
  DAT_006af514 = 0;
  GLBL_some_scalar_from_spacesav_in_fixed = 0xff0000;
  DAT_006af520 = 0xff0000;
  DAT_006af524 = 0xff0000;
  DAT_006af528 = 0;
  DAT_006af52c = 0;
  DAT_0055ed20 = 0;
  FUN_004cc601();
  return 1;
}

