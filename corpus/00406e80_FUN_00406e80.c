
int FUN_00406e80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  iVar2 = Cbin_Open(param_1);
  if (iVar2 == 0) {
    FUN_00432ee0(iVar1,s_anim_LoadFile_00532968);
    return 0;
  }
  FUN_00405d80();
  FUN_0048e3d0(&param_1,0x5c,4,s_ANIM_FILE_0053295c,0xcccc);
  FUN_00405e20(param_1,param_2);
  uVar3 = Cbin_CountEntries(s_ANIM_NAMES_0053278c,s_ANIM_NAME_00532780);
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(int *)(param_1 + 0xc) = DAT_005b9ab0;
  FUN_00405f20(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0049c530(param_1);
    param_1 = 0;
  }
  else {
    FUN_0048e3d0(param_1 + 0x10,DAT_005b9ab0 * 0xc,4,s_ANIMFILE_PART_BUFFER_00532944,0xcccc);
    FUN_0048e3d0(param_1 + 0x14,DAT_005b9ab0 * 0xc,4,s_ANIMFILE_ORIENT_BUFFER_0053292c,0xcccc);
    FUN_0048e3d0(param_1 + 8,*(int *)(param_1 + 4) * 0x54,4,s_ANIMFILE_ANIM_BUFFERS_00532914,0xcccc)
    ;
    FUN_00406e40(param_1);
  }
  if (DAT_005b9ab0 != 0) {
    FUN_0049c530(DAT_005b9ab4);
  }
  if (DAT_005b9ab8 != 0) {
    FUN_0049c530(DAT_005b9abc);
  }
  Cbin_Close();
  return param_1;
}

