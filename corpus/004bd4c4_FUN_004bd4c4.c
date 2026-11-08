
LPVOID FUN_004bd4c4(uint param_1)

{
  LPVOID pvVar1;
  
  if (param_1 <= DAT_005621a0) {
    init_andor_enter_crit_section_idx(9);
    pvVar1 = (LPVOID)FUN_004c33ff(param_1);
    leave_crit_section_idx(9);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = HeapAlloc(DAT_006c9e9c,0,param_1 + 0xf & 0xfffffff0);
  return pvVar1;
}

