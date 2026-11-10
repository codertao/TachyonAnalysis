
/* integer atan2, table 0x4e08ec, returns angle << 8 */

int Math_Atan2Core(void)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  if ((in_EAX == 0) && (unaff_EBX == 0)) {
    return 0;
  }
  iVar1 = in_EAX >> 0x14;
  if (in_EAX < 1) {
    if (0 < unaff_EBX) {
      iVar2 = -unaff_EBX;
      if (iVar2 < in_EAX) {
        return (0x10000 -
               (uint)*(ushort *)
                      (&DAT_004e08ec + (int)(CONCAT44(iVar1,in_EAX << 0xc) / (longlong)iVar2) * 2))
               * 0x100;
      }
      return (*(ushort *)
               (&DAT_004e08ec +
               (int)(CONCAT44(iVar2 >> 0x14,unaff_EBX * -0x1000) / (longlong)in_EAX) * 2) + 0x8000)
             * 0x100;
    }
    if (unaff_EBX < in_EAX) {
      return (uint)*(ushort *)
                    (&DAT_004e08ec + (int)(CONCAT44(iVar1,in_EAX << 0xc) / (longlong)unaff_EBX) * 2)
             << 8;
    }
    return (0x8000 - (uint)*(ushort *)
                            (&DAT_004e08ec +
                            (int)(CONCAT44(unaff_EBX >> 0x14,unaff_EBX << 0xc) / (longlong)in_EAX) *
                            2)) * 0x100;
  }
  if (-1 < unaff_EBX) {
    if (unaff_EBX < in_EAX) {
      return (0x18000 -
             (uint)*(ushort *)
                    (&DAT_004e08ec +
                    (int)(CONCAT44(unaff_EBX >> 0x14,unaff_EBX << 0xc) / (longlong)in_EAX) * 2)) *
             0x100;
    }
    return (*(ushort *)
             (&DAT_004e08ec + (int)(CONCAT44(iVar1,in_EAX << 0xc) / (longlong)unaff_EBX) * 2) +
           0x10000) * 0x100;
  }
  iVar2 = -unaff_EBX;
  if (iVar2 < in_EAX) {
    return (*(ushort *)
             (&DAT_004e08ec +
             (int)(CONCAT44(iVar2 >> 0x14,unaff_EBX * -0x1000) / (longlong)in_EAX) * 2) + 0x18000) *
           0x100;
  }
  if (*(ushort *)(&DAT_004e08ec + (int)(CONCAT44(iVar1,in_EAX << 0xc) / (longlong)iVar2) * 2) != 0)
  {
    return (0x20000 -
           (uint)*(ushort *)
                  (&DAT_004e08ec + (int)(CONCAT44(iVar1,in_EAX << 0xc) / (longlong)iVar2) * 2)) *
           0x100;
  }
  return 0;
}

