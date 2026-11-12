
/* sweep: key-binding set stack (21 callers) */

void Input_PushBindingSet(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  if (param_1 == (undefined **)0x0) {
    param_1 = &PTR_DAT_0053e7a8;
  }
  ppuVar1 = (undefined **)0x0;
  ppuVar2 = DAT_00562bb0;
  do {
    if (ppuVar2 == (undefined **)0x0) {
LAB_00430195:
      if (param_1 != (undefined **)0x0) {
        param_1[5] = (undefined *)DAT_00562bb0;
      }
      DAT_00562bb0 = param_1;
      Input_RebuildBindings();
      clr_bytes(&DAT_005affe0,0x40);
      clr_bytes(&DAT_005aeed4,0x80);
      clr_bytes(&DAT_005af7dc,0x800);
      clr_bytes(&DAT_005aefdc,0x800);
      clr_bytes(&DAT_005aef54,0x80);
      clr_bytes(&DAT_005b0020,0x40);
      return;
    }
    if (ppuVar2 == param_1) {
      if (ppuVar1 == (undefined **)0x0) {
        DAT_00562bb0 = (undefined **)ppuVar2[5];
      }
      else {
        ppuVar1[5] = ppuVar2[5];
      }
      ppuVar2[5] = (undefined *)0x0;
      goto LAB_00430195;
    }
    ppuVar1 = ppuVar2;
    ppuVar2 = (undefined **)ppuVar2[5];
  } while( true );
}

