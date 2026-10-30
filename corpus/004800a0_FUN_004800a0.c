
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_004800a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  iVar1 = **(int **)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x50) + -0x10;
  if ((param_2 <= iVar3) && (iVar3 = *(int *)(param_1 + 0x48) + 0x10, iVar3 <= param_2)) {
    iVar3 = param_2;
  }
  local_8 = (int)(longlong)
                 ROUND(((float10)((iVar3 - *(int *)(param_1 + 0x48)) + -0x10) /
                       (float10)((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48)) + -0x20)) *
                       (float10)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)));
  **(int **)(param_1 + 0x68) = local_8 + *(int *)(param_1 + 0x60);
  FUN_00480020(param_1 + 4,iVar3,*(undefined4 *)(param_1 + 0x5c));
  piVar2 = *(int **)(param_1 + 0x68);
  if (piVar2 != &DAT_005b2d0c) {
    if (piVar2 == &DAT_005b2d10) {
      if ((iVar1 != DAT_005b2d10) &&
         (DAT_005b2d18 = DAT_005b2d10, iVar3 = FUN_0046d900(), iVar3 == 0)) {
        FUN_00440460(DAT_00571280,s_SNDEVNT_BUTTONCLICK_00556c10);
        return;
      }
    }
    else if (piVar2 == &DAT_005b2d14) {
      if ((iVar1 != DAT_005b2d14) && (iVar3 = FUN_0046d900(), iVar3 == 0)) {
        FUN_0046d8d0(s_Scomp03_wav_00556c04,DAT_005b2d14);
        return;
      }
    }
    else if (((piVar2 == &DAT_005b2c9c) || (piVar2 == &DAT_005b2ca0)) && (iVar1 != *piVar2)) {
      FUN_00452510(DAT_005b2c9c,0x80,0x80);
      FUN_004af260(DAT_005b2ca0,0x80,0x80);
      FUN_004acfa0();
    }
    return;
  }
  FUN_004b55f0(DAT_005b2d0c);
  return;
}

