
/* sweep */

int Pcx_FlushRle(undefined4 param_1,int param_2)

{
  if (param_2 == 8000) {
    save_to_open_file(param_1,8000);
    param_2 = 0;
  }
  return param_2;
}

