
/* refine: op 52 */

undefined4 MusOp_Call(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  uVar1 = *unaff_ESI;
  *unaff_EDI = unaff_ESI + 1;
  return uVar1;
}

