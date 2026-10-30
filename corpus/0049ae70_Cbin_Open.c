
/* close any open ctx, then load into g_CbinCtx */

void Cbin_Open(undefined4 param_1)

{
  if (g_CbinCtx != 0) {
    Cbin_Close();
  }
  Cbin_Open_Inner(param_1);
  return;
}

