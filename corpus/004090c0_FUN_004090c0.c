
void FUN_004090c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  DAT_005b9800 = Cbin_CountEntries(&DAT_00532c50,&DAT_00532c58);
  *(uint *)(param_1 + 0xc) = DAT_005b9800;
  if (DAT_005b9800 != 0) {
    FUN_0048e3d0(&DAT_005b9804,DAT_005b9800 * 0x44,4,s_TMP_DEFINES_00532c44,0xffff);
    FUN_0048e3d0((int *)(param_1 + 0x10),DAT_005b9800 * 0xc,4,s_base_paks_00532c38,0xffff);
    Cbin_SelectGroup(&DAT_00532c50);
    iVar3 = *(int *)(param_1 + 0x10);
    DAT_005a6788 = param_1 + 0x14;
    uVar1 = 0;
    iVar2 = DAT_005b9804;
    if (DAT_005b9800 != 0) {
      do {
        FUN_0049bdb0(&DAT_00532c58,iVar2,0x40,0,4,1);
        FUN_0049b930(&DAT_00532c58,local_20,0x20,0,4,2);
        FUN_0049b930(&DAT_00532c58,local_40,0x20,0,4,3);
        FUN_00431850(iVar3,local_20,local_40,local_40,&DAT_005a9d40,1);
        *(int *)(iVar2 + 0x40) = iVar3;
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x44;
        iVar3 = iVar3 + 0xc;
      } while (uVar1 < DAT_005b9800);
    }
    DAT_005a6788 = 0;
  }
  return;
}

