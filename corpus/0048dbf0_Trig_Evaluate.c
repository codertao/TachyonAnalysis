
/* fold conditions left-to-right with join (0 AND,1 AND NOT,2 OR); flag1=momentary,
   flag4=repeatable; latches trig+8 and runs actions */

void Trig_Evaluate(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = param_1;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 1;
  if (param_1[2] == 0) {
    if (*param_1 != 0) {
      puVar2 = (uint *)(param_1[3] + 0x20);
      param_1 = (int *)*param_1;
      do {
        if (((puVar2[-1] & 1) == 0) || (puVar2[1] == DAT_005897e4)) {
          uVar3 = *puVar2;
        }
        else {
          uVar3 = 0;
        }
        uVar4 = uVar4 | puVar2[-1] & 4;
        if (uVar5 == 0) {
          uVar6 = uVar6 & uVar3;
        }
        else if (uVar5 == 1) {
          uVar6 = uVar6 & uVar3 == 0;
        }
        else if (uVar5 == 2) {
          uVar6 = uVar6 | uVar3;
        }
        uVar5 = puVar2[-2];
        puVar2 = puVar2 + 10;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
    piVar1[2] = uVar6;
    if (uVar6 != 0) {
      Trig_RunActions(piVar1,param_2);
    }
    if (uVar4 != 0) {
      piVar1[2] = 0;
    }
  }
  return;
}

