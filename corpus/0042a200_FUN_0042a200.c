
void FUN_0042a200(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x8ac);
  if ((((piVar1 != (int *)0x0) && (GLBL_spacesav[0x3e] == 1)) && (DAT_005aeed0 == 0)) &&
     (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 4) = 0xffffff;
    *(int *)(param_1 + 0x8b0) = (DAT_00603e40 - DAT_005aeec0) + 0x140;
    *(int *)(param_1 + 0x8b4) = (DAT_00603e44 - DAT_005aeec4) + 0xf0;
    iVar3 = *(int *)(param_1 + 0x8b0) - (*(int *)(param_1 + 0x8c0) >> 1);
    iVar2 = *(int *)(param_1 + 0x8b4) - (*(int *)(param_1 + 0x8c4) >> 1);
    *(int *)(param_1 + 0x8b0) = iVar3;
    *(int *)(param_1 + 0x8b4) = iVar2;
    FUN_004281f0(*piVar1,iVar3,iVar2,0,0xffffffff,*(undefined4 *)(param_1 + 0x8b8),
                 *(undefined4 *)(param_1 + 0x8bc),*(int *)(param_1 + 0x8c0),
                 *(int *)(param_1 + 0x8c4));
  }
  return;
}

