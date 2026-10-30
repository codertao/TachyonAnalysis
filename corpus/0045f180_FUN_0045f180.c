
void FUN_0045f180(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045d680(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(DAT_0058b064 + 100));
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x80) != 0) {
      FUN_00493320(*(undefined1 *)(param_1 + 0x10),DAT_0058b064,0,param_1,DAT_0058b068,0,0,
                   (uint)*(ushort *)(param_1 + 0x12) << 2,0xffffffff,*(undefined4 *)(iVar1 + 100));
      DAT_00565410 = 0;
      (**(code **)(iVar1 + 0x80))(iVar1);
    }
    FUN_00493ca0(*(undefined1 *)(param_1 + 0x10),0,*(undefined1 *)(param_1 + 0x11),0,0);
  }
  return;
}

