
/* sweep */

bool BW_UpgradeTreeCheck(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  
  bVar1 = false;
  uVar3 = 0;
  piVar2 = DAT_005b9038;
  if (DAT_005b9034 != 0) {
    do {
      if (((*piVar2 == 0) && (piVar2[1] == *param_1)) && (bVar1 = true, param_2 < piVar2[2])) {
        return true;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar3 < DAT_005b9034);
  }
  if (param_3 == 0) {
    return false;
  }
  return !bVar1;
}

