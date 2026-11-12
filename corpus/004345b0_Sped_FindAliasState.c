
/* persistent per-alias state list DAT_005a5e08 (by alias name) */

undefined4 * Sped_FindAliasState(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_005a5e08;
  if (param_1 != 0) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[0xf]) {
      iVar2 = __stricmp(*puVar1,param_1);
      if (iVar2 == 0) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}

