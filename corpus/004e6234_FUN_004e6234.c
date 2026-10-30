
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e6234(byte param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  
  DAT_004e5ebd = param_1;
  if (*unaff_EDI != 0) {
    FUN_0049c530(*unaff_EDI);
  }
  iVar1 = FUN_004a2eb0(unaff_ESI);
  *unaff_EDI = iVar1;
  unaff_EDI[2] = _DAT_00603100;
  unaff_EDI[3] = DAT_00603104;
  if ((DAT_004e5ebd & 2) != 0) {
    FUN_004e61dc();
  }
  if ((DAT_004e5ebd & 1) != 0) {
    FUN_004a2dc0(*unaff_EDI,DAT_00603108);
  }
  if ((DAT_004e5ebd & 8) != 0) {
    FUN_004e6f6d(*unaff_EDI,&DAT_00602e00,DAT_00603108,unaff_EDI);
  }
  return;
}

