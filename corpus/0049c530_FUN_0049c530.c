
undefined4 FUN_0049c530(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    if (1 < DAT_005b9d10) {
      OutputDebugStringA(s_mem_FreeMem____Cannot_free_NULL_p_0055d874);
    }
    return 0xffffffff;
  }
  iVar1 = FUN_0049c8f0(param_1 + -0x10);
  if (iVar1 == 0) {
    if (1 < DAT_005b9d10) {
      str_sprintf(&DAT_00603f80,s_mem_FreeMem____Failed_to_free_po_0055d848,param_1);
      OutputDebugStringA(&DAT_00603f80);
    }
    return 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + -4);
  if (*(int *)(PTR_DAT_0055d7cc + 0x10) != 0) {
    FUN_0049cd50(param_1);
  }
  return 0;
}

