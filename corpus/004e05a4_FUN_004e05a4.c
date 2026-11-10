
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e05a4(void)

{
  uint *puVar1;
  uint *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  
  DAT_004dff88 = unaff_EBP;
  DAT_004dff8c = Math_Atan2Core();
  DAT_004dff98 = FUN_0052d958();
  DAT_004dff9c = FUN_0052d958();
  DAT_004dff84 = *unaff_ESI;
  *unaff_ESI = ((uint)((longlong)DAT_004dff98 * (longlong)unaff_ESI[2]) >> 0x10 |
               (int)((ulonglong)((longlong)DAT_004dff98 * (longlong)unaff_ESI[2]) >> 0x20) << 0x10)
               + ((uint)((longlong)DAT_004dff9c * (longlong)*unaff_ESI) >> 0x10 |
                 (int)((ulonglong)((longlong)DAT_004dff9c * (longlong)*unaff_ESI) >> 0x20) << 0x10);
  unaff_ESI[2] = ((uint)((longlong)DAT_004dff9c * (longlong)unaff_ESI[2]) >> 0x10 |
                 (int)((ulonglong)((longlong)DAT_004dff9c * (longlong)unaff_ESI[2]) >> 0x20) << 0x10
                 ) - ((uint)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x10 |
                     (int)((ulonglong)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x20) <<
                     0x10);
  DAT_004dff84 = *unaff_EDI;
  _DAT_004dff80 =
       (uint)((longlong)DAT_004dff9c * (longlong)unaff_EDI[2]) >> 0x10 |
       (int)((ulonglong)((longlong)DAT_004dff9c * (longlong)unaff_EDI[2]) >> 0x20) << 0x10;
  unaff_EDI[2] = _DAT_004dff80 -
                 ((uint)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x10 |
                 (int)((ulonglong)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x20) << 0x10
                 );
  DAT_004dff90 = Math_Atan2Core();
  DAT_004dff98 = FUN_0052d958();
  DAT_004dff9c = FUN_0052d958();
  DAT_004dff84 = unaff_ESI[2];
  _DAT_004dff80 =
       (uint)((longlong)DAT_004dff9c * (longlong)unaff_ESI[1]) >> 0x10 |
       (int)((ulonglong)((longlong)DAT_004dff9c * (longlong)unaff_ESI[1]) >> 0x20) << 0x10;
  unaff_ESI[1] = _DAT_004dff80 -
                 ((uint)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x10 |
                 (int)((ulonglong)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x20) << 0x10
                 );
  DAT_004dff94 = Math_Atan2Core();
  puVar1 = DAT_004dff88;
  *DAT_004dff88 = DAT_004dff8c & 0x1ffffff;
  puVar1[1] = DAT_004dff90 & 0x1ffffff;
  puVar1[2] = DAT_004dff94 & 0x1ffffff;
  return;
}

