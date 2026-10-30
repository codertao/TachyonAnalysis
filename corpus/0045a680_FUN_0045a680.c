
void FUN_0045a680(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0049c190(s_FRAME__02d_00549290);
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 != 0) {
    FUN_0048e3d0((int *)(param_1 + 0x2c),iVar1 * 0x44,4,s_SCENE_KEYFRAMES_0054929c,0xcccc);
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      do {
        FUN_0045a540(param_1,iVar1,uVar2);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x44;
      } while (uVar2 < *(uint *)(param_1 + 0x28));
    }
  }
  return;
}

