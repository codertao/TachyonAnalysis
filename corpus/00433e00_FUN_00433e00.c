
void FUN_00433e00(int param_1,int param_2)

{
  if (param_2 == 1) {
    if (*(int *)(*(int *)(param_1 + 0x8c) + 0x188) == 0x26) {
      *(code **)(param_1 + 0x68) = FUN_00433760;
    }
    else {
      *(undefined1 **)(param_1 + 0x68) = &LAB_00433800;
    }
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
    FUN_0045de80(4,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),0);
    return;
  }
  *(code **)(param_1 + 0x68) = FUN_00445720;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
  return;
}

