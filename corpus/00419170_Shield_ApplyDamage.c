
/* shields +8 take dmg*p2>>9; once <= threshold, hull +0x24 dmg*p3>>8 and +0x28 dmg*p4>>8; returns 1
   shield / 2 hull */

undefined4
Shield_ApplyDamage(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 1;
  if ((*(int *)(param_5 + 8) != 0) &&
     (iVar2 = *(int *)(param_5 + 8) - ((uint)(param_1 * param_2) >> 9),
     *(int *)(param_5 + 8) = iVar2, iVar2 < 0)) {
    *(undefined4 *)(param_5 + 8) = 0;
  }
  if (*(int *)(param_5 + 8) <= *(int *)(param_6 + 0x10)) {
    iVar2 = *(int *)(param_5 + 0x24) - ((uint)(param_1 * param_3) >> 8);
    *(int *)(param_5 + 0x24) = iVar2;
    uVar1 = 2;
    if (iVar2 < 0) {
      *(undefined4 *)(param_5 + 0x24) = 0;
    }
    iVar2 = *(int *)(param_5 + 0x28) - ((uint)(param_1 * param_4) >> 8);
    *(int *)(param_5 + 0x28) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(param_5 + 0x28) = 0;
    }
  }
  return uVar1;
}

