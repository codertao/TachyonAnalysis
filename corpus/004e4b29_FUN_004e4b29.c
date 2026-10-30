
undefined8 __fastcall FUN_004e4b29(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_004e4b0c != 0) {
    puVar2 = DAT_004e4b08;
    for (iVar1 = DAT_00604448 * DAT_0060444c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return CONCAT44(param_2,in_EAX);
}

