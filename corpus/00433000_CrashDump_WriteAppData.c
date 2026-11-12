
/* sweep: "Last pak rendered" */

void CrashDump_WriteAppData(int param_1)

{
  if (param_1 != 0) {
    c_fprintf(param_1,s________________App_Data__0053f3b8);
    if (DAT_006691e4 != 0) {
      c_fprintf(param_1,s_Last_pak_rendered___s_0053f3a0,DAT_006691e4 + 0x70);
    }
    c_fprintf(param_1,s________________End_of_app_data_0053f37c);
  }
  return;
}

