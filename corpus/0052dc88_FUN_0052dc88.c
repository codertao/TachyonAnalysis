
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052dc88(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  DAT_0052d7e4 = unaff_ESI[2];
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[2] = (int)ROUND((float)(int)unaff_ESI[2] * _DAT_00668fa4 -
                            (float)(int)unaff_ESI[1] * _DAT_00668fa0);
  unaff_EDI[1] = (int)ROUND((float)DAT_0052d7e4 * _DAT_00668fa0 +
                            (float)(int)unaff_ESI[1] * _DAT_00668fa4);
  return;
}

