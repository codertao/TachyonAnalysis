
void FUN_004a8390(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[3] != 0)) {
    FUN_004a8330(param_1);
    puVar2 = (undefined4 *)param_1[2];
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = 0;
      if (param_1[1] != 0) {
        do {
          _AIL_release_3D_sample_handle_4(*puVar2);
          uVar1 = uVar1 + 1;
          puVar2 = puVar2 + 0xe;
        } while (uVar1 < (uint)param_1[1]);
      }
      FUN_0049c530(param_1[2]);
    }
    _AIL_close_3D_provider_4(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

