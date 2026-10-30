
void FUN_00451e10(int param_1)

{
  FUN_004add80(param_1);
  FUN_004b1d10(param_1);
  if ((*(int *)(param_1 + 0x54) != 0) && (DAT_00564ae4 != 0)) {
    FUN_00452150();
    FUN_004ad470(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    FUN_00452180(DAT_005a6810);
  }
  return;
}

