
/* arg 1 + powered: HyperOutHook; else CapShip_HyperIn */

void CapShip_MsgHyperspace(int param_1,int param_2)

{
  if (param_2 == 1) {
    if ((*(uint *)(param_1 + 0x138) & 0x100) != 0) {
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x4c);
      *(code **)(param_1 + 0x134) = CapShip_HyperOutHook;
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x54);
      clr_bytes(param_1 + 0xac,0xc);
      return;
    }
  }
  else {
    CapShip_HyperIn(param_1);
  }
  return;
}

