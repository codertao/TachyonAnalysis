
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052dc34(void)

{
  int *unaff_ESI;
  int *unaff_EDI;
  
  DAT_0052d7e4 = *unaff_ESI;
  unaff_EDI[2] = unaff_ESI[2];
  *unaff_EDI = (int)ROUND((float)*unaff_ESI * _DAT_00668fac - (float)unaff_ESI[1] * _DAT_00668fa8);
  unaff_EDI[1] = (int)ROUND((float)DAT_0052d7e4 * _DAT_00668fa8 +
                            (float)unaff_ESI[1] * _DAT_00668fac);
  return;
}

