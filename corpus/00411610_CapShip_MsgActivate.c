
/* 0: DriftHook (hold heading); 1: SteerHook */

void CapShip_MsgActivate(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(code **)(param_1 + 0x134) = CapShip_DriftHook;
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x54);
    return;
  }
  *(code **)(param_1 + 0x134) = CapShip_SteerHook;
  return;
}

