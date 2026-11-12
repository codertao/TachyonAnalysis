
/* sweep: IMAGE_%s */

void Ui_FindImageByName(undefined4 param_1)

{
  str_sprintf(&DAT_005a41e0,s_IMAGE__s_005444a8,param_1);
  MnuImage_Find(&g_UiManager,&DAT_005a41e0);
  return;
}

