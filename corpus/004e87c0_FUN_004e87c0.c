
ulonglong __fastcall FUN_004e87c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = ((uint)(byte)(&stack0x00000004)[DAT_004e727c * 4] << 8) << ((byte)DAT_004e7268 & 0x1f);
  iVar1 = CONCAT22((short)((uint)iVar1 >> 0x10),
                   CONCAT11((&stack0x00000004)[DAT_004e7294 * 4],(char)iVar1)) <<
          ((byte)DAT_004e7280 & 0x1f);
  return CONCAT44(param_2,CONCAT22((short)((uint)iVar1 >> 0x10),
                                   CONCAT11((&stack0x00000004)[DAT_004e72ac * 4],(char)iVar1)) >>
                          (0x10U - (char)DAT_004e7298 & 0x1f)) & 0xffffffff0000ffff;
}

