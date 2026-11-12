
/* sweep */

undefined ** ActionName_FromId(undefined *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_s_action_define_00536db8;
  puVar1 = PTR_s_VON_TALK_00536dbc;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (undefined **)0x0;
    }
    if (ppuVar2[3] == param_1) break;
    puVar1 = ppuVar2[5];
    ppuVar2 = ppuVar2 + 4;
  }
  return ppuVar2;
}

