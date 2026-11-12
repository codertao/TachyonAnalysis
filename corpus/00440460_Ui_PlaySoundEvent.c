
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (ui, SNDEVNT_* name) */

void Ui_PlaySoundEvent(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = Mnu_FindSoundEvent(param_1,param_2);
  if (iVar1 != 0) {
    puVar3 = &DAT_005a61a0;
    for (iVar2 = 0xc; _DAT_005a61a8 = GLBL_spacesav[0x54], iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3 = (undefined4 *)(iVar1 + 0x40);
    puVar4 = &DAT_005a61a0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    DAT_005a61b0 = DAT_005a61b0 | 4;
    _DAT_005a61bc = _DAT_005a61a8;
    SndTrig_Play(&DAT_005a61a0,param_1 + 0x78);
  }
  return;
}

