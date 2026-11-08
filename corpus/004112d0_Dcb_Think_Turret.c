
/* turret DCB think (+0x68): range flags; runs Turret_Think only while root +0x138 has 8 (weapon
   generator alive) and root +0x130 bit 1 clear */

void Dcb_Think_Turret(int param_1)

{
  Dcb_SetRangeFlags((undefined4 *)(param_1 + 0x15c),*(int *)(param_1 + 0x8c) + 0xd0,param_1);
  if (((*(byte *)(*(int *)(param_1 + 0xdc) + 0x138) & 8) != 0) &&
     ((*(byte *)(*(int *)(param_1 + 0xdc) + 0x130) & 1) == 0)) {
    Turret_Think(param_1);
    *(undefined4 *)(param_1 + 0x15c) = 40000;
  }
  return;
}

