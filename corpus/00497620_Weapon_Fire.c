
/* checks energy/ammo vs def+0x58, calls def+0x6c fire fn along shooter +0x34/+0x4c, cycles mount */

undefined4
Weapon_Fire(int *param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
           undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x50) == 0) {
    if (param_4 != (int *)0x0) {
      if (*(code **)(iVar1 + 0xfc) == (code *)0x0) {
        if (*param_4 < *(int *)(iVar1 + 0x58)) {
          return 0;
        }
      }
      else {
        iVar3 = (**(code **)(iVar1 + 0xfc))(param_1,param_4);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
  }
  else if (param_1[0xb] == 0) {
    return 0;
  }
  (**(code **)(iVar1 + 0x6c))
            (iVar1,param_2,param_3,param_3 + 0x34,param_3 + 0x4c,param_1[9],param_5,param_6);
  param_1[2] = *(int *)(param_1[2] + 0x18);
  if (*(int *)(iVar1 + 0x50) == 0) {
    if (param_4 != (int *)0x0) {
      if (*(code **)(iVar1 + 0x100) == (code *)0x0) {
        *param_4 = *param_4 - *(int *)(iVar1 + 0x58);
        if (*param_4 < 0) {
          *param_4 = 0;
        }
      }
      else {
        (**(code **)(iVar1 + 0x100))(param_4,iVar1);
      }
    }
  }
  else {
    param_1[0xb] = param_1[0xb] + -1;
  }
  if (((*(byte *)(param_1 + 9) & 2) != 0) && (*(int *)(iVar1 + 0xa4) != 0)) {
    DAT_00565790 = DAT_00565790 + 1;
    if (DAT_00565788 < *(uint *)(iVar1 + 0xa8)) {
      DAT_00565788 = *(uint *)(iVar1 + 0xa8);
    }
    uVar2 = *(uint *)(iVar1 + 0xa4);
    if ((int)DAT_0056578c < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
      DAT_0056578c = uVar2;
    }
  }
  return 1;
}

