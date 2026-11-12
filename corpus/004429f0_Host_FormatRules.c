
/* sweep: guess */

void Host_FormatRules(undefined4 param_1)

{
  if (GLBL_spacesav[0x13] == 0) {
    str_sprintf(param_1,&PTR_DAT_00540eb8);
    return;
  }
  if (GLBL_spacesav[0x13] != 1) {
    str_sprintf(param_1,&DAT_00540ec0);
    return;
  }
  str_sprintf(param_1,&PTR_DAT_00540ebc);
  return;
}

