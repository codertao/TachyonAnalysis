
/* sweep */

undefined4 Pff_OpenEntry(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = Pff_FindEntry(param_1,param_2);
  param_2[0x27] = iVar1;
  if (iVar1 == 0) {
    Pff_ReadError(param_1,param_2);
    param_2[0x2d] = 1;
    return 0;
  }
  GLBL_filehandle = *param_2;
  move_to_end_of_file_and_get_len(*(undefined4 *)(param_2[0x27] + 4),0);
  param_2[0x2a] = 0;
  param_2[0x2d] = 0;
  return 1;
}

