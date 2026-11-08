
/* pick transport vtable: 1 -> 0x55e8c8 (netsock TCP/IP), else 0x55e800; active ptr 0x55e458 */

void Net_SelectTransport(int param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_FUN_0055e8c8;
  if (param_1 != 1) {
    ppuVar3 = &PTR_FUN_0055e800;
  }
  ppuVar1 = (undefined **)PTR_PTR_0055e458;
  ppuVar2 = DAT_005648d8;
  if ((ppuVar3 != DAT_005648d8) && (ppuVar1 = ppuVar3, ppuVar2 = ppuVar3, DAT_0055e3e0 != 0)) {
    thunk_FUN_004a9e50();
    ppuVar1 = ppuVar3;
  }
  DAT_005648d8 = ppuVar2;
  PTR_PTR_0055e458 = (undefined *)ppuVar1;
  return;
}

