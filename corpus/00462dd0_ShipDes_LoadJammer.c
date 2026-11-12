
/* sweep */

void ShipDes_LoadJammer(int param_1)

{
  int *piVar1;
  int iVar2;
  
  clr_bytes(param_1,0xc);
  Cbin_GetScalar(s_JAMMER_0054a1cc,&PTR_s_W_AVAILABLE_0053413c_0xc_00532ac0,0,0,param_1);
  piVar1 = (int *)(param_1 + 4);
  Cbin_GetScalar(s_JAMMER_0054a1cc,s_JAMMING_RANGE_0054a1bc,0,0,piVar1);
  iVar2 = *piVar1 << 0xd;
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    *(int *)(param_1 + 8) = (int)(0xff00000000 / (longlong)iVar2);
  }
  return;
}

