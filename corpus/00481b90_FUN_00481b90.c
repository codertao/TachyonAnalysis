
void FUN_00481b90(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_0043e6a0(DAT_00571280,s_TxtOptP4MsgTxt_00556da8,&DAT_00562b14);
  DAT_00563d5c = FUN_0042f470();
  puVar1 = (undefined4 *)
           mem_GetMemEx_probably_alloc(DAT_00563d5c * 4,4,0,s_Remap_ActionEntry_00556de4);
  DAT_00563d64 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    DAT_00563d5c = 0;
  }
  else {
    uVar3 = 0;
    if (DAT_00563d5c != 0) {
      do {
        uVar2 = FUN_0042f4a0(uVar3);
        *puVar1 = uVar2;
        puVar1 = puVar1 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_00563d5c);
    }
  }
  if (DAT_00563d68 == 0) {
    DAT_00563d68 = load_rtxt_bin(s_helptext_bin_0053cb20,0xa100);
    if (DAT_00563d68 != 0) {
      FUN_0049c840(DAT_00563d68,s_helptext_bin_0053cb20);
      Options_RefreshKeyMapPage();
      return;
    }
  }
  return;
}

