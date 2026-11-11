
/* straight flight for launch frames, then switch to def+0x64 and reset life */

void Proj_ThinkMissileLaunch(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  iVar1 = *(int *)(param_1 + 0xd4) + -1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xd4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x3c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 100);
  }
  return;
}

