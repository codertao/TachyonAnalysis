
/* sweep: SOUND/BASE LOOPS */

void BaseFile_LoadSoundLoops(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = Cbin_CountEntries(s_SOUND_00532778,&DAT_00532c68);
  *param_1 = uVar1;
  if (uVar1 != 0) {
    Mem_AllocZeroTagged(param_1 + 1,uVar1 * 0x94,4,s_BASE_LOOPS_00532c5c,0xffff);
    Cbin_SelectGroup(s_SOUND_00532778);
    uVar1 = param_1[1];
    uVar3 = 0;
    if (*param_1 != 0) {
      iVar4 = uVar1 + 0x90;
      do {
        Cbin_FindParam_Global(&DAT_00532c68,uVar1,0x40,0,4,1);
        Cbin_GetParamN(&DAT_00532c68,iVar4 + -0x50,0x40,0,4,2);
        Cbin_GetParamN(&DAT_00532c68,0,0,(undefined4 *)(iVar4 + -8),1,3);
        Cbin_GetParamN(&DAT_00532c68,0,0,iVar4,1,4);
        Cbin_GetParamN(&DAT_00532c68,0,0,iVar4 + -4,1,5);
        uVar2 = Fixed_ToFloat(*(undefined4 *)(iVar4 + -8));
        *(undefined4 *)(iVar4 + -0xc) = uVar2;
        uVar3 = uVar3 + 1;
        uVar1 = uVar1 + 0x94;
        iVar4 = iVar4 + 0x94;
      } while (uVar3 < *param_1);
    }
  }
  return;
}

