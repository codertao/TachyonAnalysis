
/* mount-aware read-region(name,dst,fileOff,len): disk 0x4a10e0 (_llseek/_lread) or PFF mount
   0x4a4230 */

undefined4 Fs_ReadRegion(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = param_4;
  uVar1 = param_3;
  if (DAT_006038b4 == 0) {
    if (DAT_006038a8 != 0) goto LAB_004a1937;
    uVar3 = param_2;
    if (DAT_0060390c == 0) goto LAB_004a190f;
  }
  else {
LAB_004a190f:
    uVar3 = FUN_004a10e0(param_1,param_2,param_3,param_4);
    if (DAT_006038b8 == 0) {
      return uVar3;
    }
    if (DAT_006038a8 != 0) {
LAB_004a1937:
      uVar3 = param_1;
      uVar5 = param_2;
      if (DAT_006038ac != 0) {
        uVar3 = FUN_004a11c0(param_1,param_2,param_3,param_4,DAT_006038a8);
      }
      uVar3 = FUN_004a4230(uVar3,uVar5);
      if (*(int *)(DAT_006038a8 + 0xb4) == 0) {
        iVar4 = DAT_006038a8;
        if (DAT_00564004 == (code *)0x0) {
          return uVar3;
        }
LAB_004a1a41:
        (*DAT_00564004)(param_1,iVar4 + 4,*(undefined4 *)(iVar4 + 0xb0),1);
        return uVar3;
      }
    }
    if (DAT_0060390c == 0) goto LAB_004a1a07;
  }
  param_4 = &DAT_006038c0;
  param_3 = 0;
  do {
    if (*param_4 != 0) {
      uVar3 = param_1;
      uVar5 = param_2;
      if (DAT_006038ac != 0) {
        uVar3 = FUN_004a11c0(param_1,param_2,uVar1,uVar2,*param_4);
      }
      uVar3 = FUN_004a4230(uVar3,uVar5);
      if (*(int *)(*param_4 + 0xb4) == 0) {
        if (DAT_00564004 == (code *)0x0) {
          return uVar3;
        }
        iVar4 = *param_4;
        goto LAB_004a1a41;
      }
    }
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
  } while (param_3 < 0x10);
LAB_004a1a07:
  if (DAT_00564004 != (code *)0x0) {
    (*DAT_00564004)(param_1,0,0,0);
  }
  FUN_004a1a60(param_1,s_file_RawLoadBlockEx_0055e0b8);
  return uVar3;
}

