
void move_to_end_of_file_and_get_len(LONG param_1,int param_2)

{
  _llseek(GLBL_filehandle,param_1,param_2);
  return;
}

