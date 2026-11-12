
/* sweep */

void PartChain_SetGunsActive(int param_1,undefined4 param_2)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xe0)) {
    if ((*(byte *)(*(int *)(param_1 + 0xdc) + 0x34) & 6) != 0) {
      BasePart_SetGunActive(param_1,param_2);
    }
  }
  return;
}

