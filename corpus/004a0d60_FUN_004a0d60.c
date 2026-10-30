
HFILE FUN_004a0d60(LPCSTR param_1)

{
  DAT_006038a0 = _lcreat(param_1,0);
  if (DAT_006038a0 == -1) {
    FUN_004a1a60(param_1,s_file_Create_0055e060);
    DAT_006038b8 = 1;
    return -1;
  }
  DAT_006038b0 = 0;
  DAT_00603900 = 0;
  DAT_006038b8 = 0;
  return DAT_006038a0;
}

