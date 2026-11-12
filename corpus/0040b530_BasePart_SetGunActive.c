
/* sweep */

void BasePart_SetGunActive(int param_1,int param_2)

{
  if (param_2 == 1) {
    *(code **)(param_1 + 0x68) = Dcb_Think_Missile;
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

