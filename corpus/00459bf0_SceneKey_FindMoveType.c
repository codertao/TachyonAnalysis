
/* sweep: %s_FLY/%s_MOVETO */

undefined4 SceneKey_FindMoveType(undefined4 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined1 local_40 [64];
  
  ppuVar3 = &PTR_s__s_FLY_00548e88;
  puVar1 = PTR_s__s_FLY_00548e88;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return 0;
    }
    str_sprintf(local_40,*ppuVar3,*param_2);
    iVar2 = Cbin_GetParam(param_1,local_40,0,0,0,1,1);
    if (iVar2 != 0) break;
    puVar1 = ppuVar3[2];
    ppuVar3 = ppuVar3 + 2;
  }
  return 1;
}

