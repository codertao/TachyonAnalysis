
void FUN_004ada90(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 == 1) {
      if (param_1[0x1c0] != 0) {
        if (param_1 != DAT_00604588) {
          puVar2 = param_1;
          puVar3 = &DAT_00603180;
          for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        FUN_004a2e30(param_1[0x1c0]);
        Gfx_SetPalMatchMode(1);
        DAT_00604588 = param_1;
        return;
      }
      FUN_004a2e40(param_1,param_1 + 0x180);
      Gfx_SetPalMatchMode(2);
      DAT_00604588 = param_1;
      return;
    }
    if (param_1[0x1c1] != 0) {
      if (param_1 != DAT_00604588) {
        puVar2 = param_1;
        puVar3 = &DAT_00603180;
        for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      FUN_004a2e30(param_1[0x1c1]);
      Gfx_SetPalMatchMode(1);
      DAT_00604588 = param_1;
      return;
    }
    FUN_004a2e40(param_1,param_1 + 0x180);
    Gfx_SetPalMatchMode(3);
    DAT_00604588 = param_1;
  }
  return;
}

