
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2da0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00603180;
  for (iVar1 = 0x1c8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00603590 = 0x20;
  _DAT_00603594 = 0;
  return;
}

