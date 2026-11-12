
/* sweep: AIL sample stream */

undefined4 SbfStream_Fill(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD local_4;
  
  if (DAT_006af504 == 0) {
    return 0;
  }
  if ((((char)DAT_0055ed20 - (char)DAT_0058f2ec & 0xfU) != 0) &&
     (iVar1 = _AIL_sample_buffer_ready_4(DAT_00562cf0), iVar1 != -1)) {
    _AIL_load_sample_buffer_16
              (DAT_00562cf0,iVar1,&DAT_0066f4e0 + DAT_0058f2ec * 0x4000,
               *(undefined4 *)(&DAT_0058f300 + DAT_0058f2ec * 4));
    DAT_0058f2ec = DAT_0058f2ec + 1 & 0xf;
  }
  if (DAT_006af514 < 1) {
    MusScr_RunMain();
  }
  else if (((char)DAT_0055ed20 - (char)DAT_0058f2ec & 0xfU) < 0xd) {
    BVar2 = ReadFile(GLBL_sbf_file_handle,&DAT_0066f4e0 + DAT_0055ed20 * 0x4000,DAT_00562cec,
                     &local_4,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      return 0;
    }
    _AIL_set_sample_volume_8
              (DAT_00562cf0,
               (GLBL_some_scalar_from_spacesav_in_fixed >> 0x10) * (DAT_006af520 >> 0x10) >> 9);
    if (DAT_006af514 < (int)local_4) {
      *(int *)(&DAT_0058f300 + DAT_0055ed20 * 4) = DAT_006af514;
      DAT_006af514 = 0;
    }
    else {
      DAT_006af514 = DAT_006af514 - local_4;
      *(DWORD *)(&DAT_0058f300 + DAT_0055ed20 * 4) = local_4;
    }
    DAT_0055ed20 = DAT_0055ed20 + 1 & 0xf;
    DAT_006af520 = DAT_006af520 + DAT_006af528;
    if (DAT_006af520 < 0) {
      DAT_006af520 = 0;
    }
    else if (0xff0000 < DAT_006af520) {
      DAT_006af520 = 0xff0000;
    }
    if ((DAT_006af52c != 0) &&
       (GLBL_some_scalar_from_spacesav_in_fixed =
             GLBL_some_scalar_from_spacesav_in_fixed - DAT_006af52c,
       GLBL_some_scalar_from_spacesav_in_fixed < 0)) {
      GLBL_some_scalar_from_spacesav_in_fixed = 0;
      return 1;
    }
  }
  return 1;
}

