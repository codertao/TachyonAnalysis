
void FUN_0045ad90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0049c190(s_CAMERA_FRAME__02d_005492c0);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 != 0) {
    FUN_0048e3d0((int *)(param_1 + 0x24),iVar1 * 0x60,4,s_SCENE_CAMERA_KEYFRAMES_005492d4,0xcccc);
    iVar1 = *(int *)(param_1 + 0x24);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        FUN_0045abf0(param_1,iVar1,uVar2);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x60;
      } while (uVar2 < *(uint *)(param_1 + 0x20));
    }
  }
  return;
}

