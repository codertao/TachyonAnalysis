
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052dbe0(void)

{
  int *unaff_ESI;
  int *unaff_EDI;
  
  DAT_0052d7e4 = unaff_ESI[2];
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = (int)ROUND((float)unaff_ESI[2] * _DAT_00668f9c - (float)*unaff_ESI * _DAT_00668f98)
  ;
  *unaff_EDI = (int)ROUND((float)DAT_0052d7e4 * _DAT_00668f98 + (float)*unaff_ESI * _DAT_00668f9c);
  return;
}

