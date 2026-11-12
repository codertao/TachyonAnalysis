
/* sweep: guess */

undefined4 Pff_SeekToEntry(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  GLBL_filehandle = *param_3;
  iVar1 = param_3[0x27];
  if (param_2 == 0) {
    param_1 = param_1 + *(int *)(iVar1 + 4);
  }
  else if (param_2 == 1) {
    param_1 = param_1 + param_3[0x2a] + *(int *)(iVar1 + 4);
  }
  else if (param_2 == 2) {
    param_1 = param_1 + *(int *)(iVar1 + 8) + *(int *)(iVar1 + 4);
  }
  param_3[0x2a] = param_1 - *(int *)(iVar1 + 4);
  move_to_end_of_file_and_get_len(param_1,0);
  param_3[0x2d] = 0;
  return param_3[0x2a];
}

