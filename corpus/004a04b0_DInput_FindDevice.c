
/* sweep */

undefined4 * DInput_FindDevice(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_00563ff4;
  if (param_1 != 0) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      iVar2 = DInput_MatchGuid(puVar1 + 2,param_1,0x10);
      if (iVar2 == 0) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}

