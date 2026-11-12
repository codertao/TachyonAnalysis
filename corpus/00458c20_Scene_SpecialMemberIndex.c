
/* sweep: _PLAYER/_INPUT_ANCHOR */

undefined4 Scene_SpecialMemberIndex(undefined4 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_s__PLAYER_00548e48;
  puVar1 = PTR_s__PLAYER_00548e48;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return 0;
    }
    iVar2 = __stricmp(param_1,*ppuVar3);
    if (iVar2 == 0) break;
    puVar1 = ppuVar3[2];
    ppuVar3 = ppuVar3 + 2;
  }
  *param_2 = ppuVar3[1];
  return 1;
}

