
/* sweep */

void Fs_Seek(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00603900 != 0) {
    Pff_SeekToEntry(param_1,param_2,*DAT_00603908);
    return;
  }
  if (DAT_006038b0 != 0) {
    Pff_SeekToEntry(param_1,param_2,GLBL_maybe_pff_base);
    return;
  }
  move_to_end_of_file_and_get_len(param_1,param_2);
  return;
}

