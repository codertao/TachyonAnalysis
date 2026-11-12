
/* sweep */

undefined4 DInput_SelectByGuid(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DInput_FindDevice(param_1);
  if (iVar1 == 0) {
    DInput_SelectDevice(0);
    return 0xffffffff;
  }
  DInput_SelectDevice(iVar1);
  return 0;
}

