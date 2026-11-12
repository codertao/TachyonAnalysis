
/* sweep */

void MnuImage_Reload(undefined4 param_1,undefined4 param_2)

{
  Gfx_HwControl1();
  MnuImage_Add(param_1,param_2);
  MnuImage_Find(param_1,param_2);
  return;
}

