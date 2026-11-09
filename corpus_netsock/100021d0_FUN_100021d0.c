
void FUN_100021d0(void)

{
  FILE *_File;
  time_t tVar1;
  char local_100 [256];
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  DAT_10019ca2 = 0;
  _File = fopen(s_LOSEPCKT_NFO_10007030,&DAT_1000702c);
  if (_File != (FILE *)0x0) {
    fgets(local_100,0xff,_File);
    DAT_10019ca2 = atoi(local_100);
    fclose(_File);
  }
  return;
}

