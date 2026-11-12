
/* sweep */

void Anim_GetEmitterPoint(int param_1,int param_2,uint param_3,int *param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = Model_GetRootPart(*(undefined4 *)(param_1 + 0x58));
  iVar2 = *(int *)(iVar2 + param_2 * 0x2c);
  if (param_3 < *(uint *)(iVar2 + 0x38)) {
    piVar1 = *(int **)(*(int *)(iVar2 + 0x50) + 0xc + param_3 * 0x10);
    *param_4 = *piVar1;
    param_4[1] = piVar1[1];
    param_4[2] = piVar1[2];
  }
  else {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  iVar2 = (int)param_5 >> 1;
  uVar3 = global_bad_shift_rng();
  *param_4 = *param_4 + ((uVar3 % param_5 + *(int *)(param_1 + 0x34)) - iVar2);
  uVar3 = global_bad_shift_rng();
  param_4[1] = param_4[1] + ((uVar3 % param_5 + *(int *)(param_1 + 0x38)) - iVar2);
  uVar3 = global_bad_shift_rng();
  param_4[2] = param_4[2] + ((uVar3 % param_5 + *(int *)(param_1 + 0x3c)) - iVar2);
  return;
}

