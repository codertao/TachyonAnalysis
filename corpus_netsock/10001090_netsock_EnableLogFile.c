
undefined4 __cdecl netsock_EnableLogFile(char *param_1,int param_2)

{
                    /* 0x1090  8  netsock_EnableLogFile */
  if (param_2 == 0) {
    if ((DAT_10019c6c != 0) && (DAT_10019c68 != 0)) {
      fclose((FILE *)DAT_10019c6c);
      DAT_10019c68 = 0;
      DAT_10019c6c = 0;
      return 0;
    }
  }
  else {
    DAT_10019c6c = (int)fopen(param_1,&DAT_10007010);
    if ((FILE *)DAT_10019c6c == (FILE *)0x0) {
      DAT_10019c68 = DAT_10019c6c;
      return 0x20;
    }
    DAT_10019c68 = 1;
  }
  return 0;
}

