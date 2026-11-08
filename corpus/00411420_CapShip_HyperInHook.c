
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* decelerate; at rest -> SteerHook, post {OBJ, code 9} */

void CapShip_HyperInHook(int param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00423e80(param_1,*(undefined4 *)(param_1 + 0xd4));
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xf8);
  *(float *)(param_1 + 0xf8) = *(float *)(param_1 + 0xf8) - _DAT_0052e5ec;
  if (*(float *)(param_1 + 0xd4) <= _DAT_0052e598) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    uStack_c = 0;
    uStack_8 = 0xffffffff;
    uStack_4 = 0xffffffff;
    *(code **)(param_1 + 0x134) = CapShip_SteerHook;
    uStack_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
    uStack_18 = 1;
    uStack_10 = 9;
    Mission_PostEvent(&uStack_18,*(undefined4 *)(param_1 + 100));
  }
  return;
}

