
/* sweep */

void GateFx_Flicker(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = global_bad_shift_rng();
    *(uint *)(param_1 + 0x2c) = (uVar1 & 0x7f) + 0x80;
    uVar1 = global_bad_shift_rng();
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + ((uVar1 & 0x3fff) - 0x2000);
    *(undefined2 *)(param_1 + 0x32) = 0xffff;
    Ent_Draw(param_1 + 0x18);
  }
  return;
}

