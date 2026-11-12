
/* sweep: guess, +0xfc */

undefined4 Weapon_CallOnSelect(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    if (*(code **)(iVar1 + 0xfc) != (code *)0x0) {
      uVar2 = (**(code **)(iVar1 + 0xfc))(param_1,param_2);
      return uVar2;
    }
    if (param_1[4] == 0) {
      if (*(int *)(iVar1 + 0x50) == 0) {
        if (*(int *)(iVar1 + 0x58) <= *param_2) {
          return 1;
        }
      }
      else if (param_1[0xb] != 0) {
        return 1;
      }
    }
    else if (*(int *)(iVar1 + 0x50) == 0) {
      if (param_1[5] <= *param_2) {
        return 1;
      }
    }
    else if ((uint)param_1[3] <= (uint)param_1[0xb]) {
      return 1;
    }
  }
  return 0;
}

