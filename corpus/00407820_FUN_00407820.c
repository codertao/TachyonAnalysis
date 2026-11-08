
void FUN_00407820(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x4c) != 0) {
    uVar1 = FUN_004b1cf0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_3 + 0xc),
                         *(undefined4 *)(param_3 + 0x10),param_3);
    Anim_CopyPartRotations(param_1 + 0x18,uVar1);
    FUN_004b21c0(param_1 + 0x18);
    iVar3 = *(int *)(param_2 + 0x50);
    uVar2 = 0;
    if (*(int *)(param_2 + 0x4c) != 0) {
      do {
        Anim_StepParticlePath(param_1,iVar3);
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x9c;
      } while (uVar2 < *(uint *)(param_2 + 0x4c));
    }
  }
  return;
}

