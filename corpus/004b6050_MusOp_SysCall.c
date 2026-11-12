
/* refine: op 51, table 0x669400 (null entry pushes 0) */

void MusOp_SysCall(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EBP;
  byte *unaff_ESI;
  
  uVar1 = 0;
  if (*(code **)(&DAT_00669400 + (uint)*unaff_ESI * 4) != (code *)0x0) {
    uVar1 = (**(code **)(&DAT_00669400 + (uint)*unaff_ESI * 4))();
  }
  *unaff_EBP = uVar1;
  return;
}

