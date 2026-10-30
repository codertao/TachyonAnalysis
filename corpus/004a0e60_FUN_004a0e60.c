
HFILE FUN_004a0e60(LPCSTR param_1)

{
  DAT_006038a0 = _lopen(param_1,1);
  if (DAT_006038a0 == -1) {
    DAT_006038b8 = 1;
    return -1;
  }
  DAT_006038b0 = 0;
  DAT_00603900 = 0;
  DAT_006038b8 = 0;
  return DAT_006038a0;
}

