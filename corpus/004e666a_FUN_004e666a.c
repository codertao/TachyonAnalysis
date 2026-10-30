
void FUN_004e666a(void)

{
  char *unaff_ESI;
  
  while( true ) {
    if (*unaff_ESI == '\0') break;
    if (*unaff_ESI == '~') {
      unaff_ESI = unaff_ESI + 2;
    }
    else {
      FUN_004e665b();
      unaff_ESI = unaff_ESI + 1;
    }
  }
  return;
}

