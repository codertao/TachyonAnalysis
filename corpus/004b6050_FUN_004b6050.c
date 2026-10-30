
void FUN_004b6050(void)

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

