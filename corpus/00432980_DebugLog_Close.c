
/* sweep */

void DebugLog_Close(void)

{
  if (DAT_00562bc4 != 0) {
    c_fclose(DAT_00562bc4);
    DAT_00562bc4 = 0;
  }
  return;
}

