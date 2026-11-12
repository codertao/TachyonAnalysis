
/* sweep */

void SpaceDust_Respawn(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_1 + 0x34);
  *piVar1 = DAT_005b2808;
  *(undefined4 *)(param_1 + 0x38) = DAT_005b280c;
  *(undefined4 *)(param_1 + 0x3c) = DAT_005b2810;
  uVar2 = global_bad_shift_rng();
  *piVar1 = *piVar1 + (uVar2 & 0xfffff);
  uVar2 = global_bad_shift_rng();
  *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (uVar2 & 0xfffff);
  uVar2 = global_bad_shift_rng();
  *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + (uVar2 & 0xfffff);
  *(int *)(param_1 + 0x78) = *piVar1;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x3c);
  return;
}

