
/* sweep: guess */

void Weapon_ConsumeHalfEnergy(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) - (*(int *)(param_2 + 0x58) >> 1);
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - (*(int *)(param_2 + 0x58) >> 1);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x10) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

