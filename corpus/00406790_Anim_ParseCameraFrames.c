
void Anim_ParseCameraFrames(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Anim_CountCameraFrames(param_1);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 != 0) {
    Mem_AllocZeroTagged((int *)(param_1 + 0x24),iVar1 * 0x1c,4,s_ANIM_CAMERA_KEYFRAMES_00532830,
                        0xcccc);
    iVar1 = *(int *)(param_1 + 0x24);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        Anim_ParseCameraFrame(param_1,iVar1,uVar2);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x1c;
      } while (uVar2 < *(uint *)(param_1 + 0x20));
    }
  }
  return;
}

