
/* segment-cast filter: predicts moving ships, ignores own target etc. */

undefined4 Ai_LookaheadFilter(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_4;
  
  if ((*(short *)(param_2 + 0x76) != 2) && (*(short *)(param_2 + 0x76) != 1)) {
    return 1;
  }
  iStack_18 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0) * 0xfa;
  iStack_14 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4) * 0xfa;
  iStack_10 = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8) * 0xfa;
  piVar1 = (int *)(param_2 + 0x34);
  iVar2 = *piVar1;
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uStack_4 = *(undefined4 *)(param_2 + 0x3c);
  *piVar1 = *piVar1 + *(int *)(param_2 + 0xa0) * 0x15e;
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + *(int *)(param_2 + 0xa4) * 0x15e;
  *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0xa8) * 0x15e;
  iVar4 = Coll_SegmentVsSphere
                    ((int *)(param_1 + 0x34),&iStack_18,param_2,0x10000,&DAT_005b3194,DAT_005b31a0);
  *piVar1 = iVar2;
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  if (iVar4 != 0) {
    *(undefined4 *)(param_2 + 0x3c) = uStack_4;
    return 1;
  }
  *(undefined4 *)(param_2 + 0x3c) = uStack_4;
  return 0;
}

