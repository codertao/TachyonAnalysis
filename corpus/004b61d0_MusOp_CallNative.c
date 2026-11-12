
/* refine: op 64, pushes result */

void MusOp_CallNative(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *unaff_EBP;
  byte *unaff_ESI;
  
  pcVar1 = *(code **)(*(int *)(DAT_006695a4 + 0x14) + (uint)*unaff_ESI * 4);
  uVar2 = 0;
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(unaff_EBP + -1);
  }
  *unaff_EBP = uVar2;
  return;
}

