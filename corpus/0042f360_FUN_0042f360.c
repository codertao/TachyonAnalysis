
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f360(void)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_00562ba4 == 0) {
    DAT_00562ba4 = load_rtxt_bin(s_helptext_bin_0053cb20,0xe0000);
    if (DAT_00562ba4 == 0) {
      return;
    }
    FUN_0049c840(DAT_00562ba4,s_helptext_bin_0053cb20);
  }
  if (PTR_s_VON_TALK_00536dbc != (undefined *)0x0) {
    ppuVar3 = &PTR_s_VON_TALK_00536dbc;
    do {
      puVar2 = (undefined4 *)Rtxt_Lookup(DAT_00562ba4,ppuVar3[-1],*ppuVar3);
      if (puVar2 == (undefined4 *)0x0) {
        ppuVar3[1] = *ppuVar3;
      }
      else {
        ppuVar3[1] = (undefined *)*puVar2;
      }
      ppuVar1 = ppuVar3 + 4;
      ppuVar3 = ppuVar3 + 4;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  if (PTR_s_KEY_NONE_0053768c != (undefined *)0x0) {
    ppuVar3 = &PTR_s_KEY_NONE_0053768c;
    do {
      puVar2 = (undefined4 *)Rtxt_Lookup(DAT_00562ba4,ppuVar3[-1],*ppuVar3);
      if (puVar2 == (undefined4 *)0x0) {
        ppuVar3[1] = *ppuVar3;
      }
      else {
        ppuVar3[1] = (undefined *)*puVar2;
      }
      ppuVar1 = ppuVar3 + 4;
      ppuVar3 = ppuVar3 + 4;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  if (PTR_s_MOD_NONE_005399ec != (undefined *)0x0) {
    ppuVar3 = &PTR_s_MOD_NONE_005399ec;
    do {
      puVar2 = (undefined4 *)Rtxt_Lookup(DAT_00562ba4,ppuVar3[-1],*ppuVar3);
      if (puVar2 == (undefined4 *)0x0) {
        ppuVar3[1] = *ppuVar3;
      }
      else {
        ppuVar3[1] = (undefined *)*puVar2;
      }
      ppuVar1 = ppuVar3 + 4;
      ppuVar3 = ppuVar3 + 4;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  DAT_00562ba4 = 0;
  _DAT_00562ba0 = 1;
  return;
}

