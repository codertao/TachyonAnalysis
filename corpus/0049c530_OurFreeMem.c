
undefined4 OurFreeMem(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    if (1 < GLBL_mem_log_lvl) {
      OutputDebugStringA(s_mem_FreeMem____Cannot_free_NULL_p_0055d874);
    }
    return 0xffffffff;
  }
  iVar1 = Mem_FindOwnerPool(param_1 + -0x10);
  if (iVar1 == 0) {
    if (1 < GLBL_mem_log_lvl) {
      str_sprintf(&DAT_00603f80,s_mem_FreeMem____Failed_to_free_po_0055d848,param_1);
      OutputDebugStringA(&DAT_00603f80);
    }
    return 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + -4);
  if (*(int *)(PTR_global_mem_pool_root + 0x10) != 0) {
    maybe_cleanup(param_1);
  }
  return 0;
}

