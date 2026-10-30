
undefined1 * FUN_00457f50(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pcVar1 = (char *)FUN_00458060(param_1);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    uVar2 = FUN_0049e1e0(DAT_005a6140,s_AFFILIATION_00536780,pcVar1);
    puVar3 = (undefined4 *)FUN_0049df40(DAT_005a6140,uVar2);
    if (puVar3 != (undefined4 *)0x0) {
      return (undefined1 *)*puVar3;
    }
  }
  return &DAT_00562b14;
}

