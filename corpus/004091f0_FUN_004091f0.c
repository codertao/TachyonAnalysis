
void FUN_004091f0(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = Cbin_CountEntries(s_SOUND_00532778,&DAT_00532c68);
  *param_1 = uVar1;
  if (uVar1 != 0) {
    FUN_0048e3d0(param_1 + 1,uVar1 * 0x94,4,s_BASE_LOOPS_00532c5c,0xffff);
    Cbin_SelectGroup(s_SOUND_00532778);
    uVar1 = param_1[1];
    uVar3 = 0;
    if (*param_1 != 0) {
      iVar4 = uVar1 + 0x90;
      do {
        FUN_0049bdb0(&DAT_00532c68,uVar1,0x40,0,4,1);
        FUN_0049b930(&DAT_00532c68,iVar4 + -0x50,0x40,0,4,2);
        FUN_0049b930(&DAT_00532c68,0,0,(undefined4 *)(iVar4 + -8),1,3);
        FUN_0049b930(&DAT_00532c68,0,0,iVar4,1,4);
        FUN_0049b930(&DAT_00532c68,0,0,iVar4 + -4,1,5);
        uVar2 = FUN_00465f20(*(undefined4 *)(iVar4 + -8));
        *(undefined4 *)(iVar4 + -0xc) = uVar2;
        uVar3 = uVar3 + 1;
        uVar1 = uVar1 + 0x94;
        iVar4 = iVar4 + 0x94;
      } while (uVar3 < *param_1);
    }
  }
  return;
}

