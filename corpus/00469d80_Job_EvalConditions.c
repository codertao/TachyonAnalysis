
/* sweep: recursive */

uint Job_EvalConditions(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_4;
  
  uVar4 = 0;
  local_4 = 1;
  uVar3 = 0x40;
  if (param_2 != 0) {
    do {
      uVar1 = Job_EvalCondition(param_1);
      if ((uVar3 & 0x40) == 0) {
        if ((uVar3 & 0x20) == 0) {
          if ((uVar3 & 0x80) == 0) {
            if ((uVar3 & 0x100) != 0) {
              uVar3 = Job_EvalConditions(param_1,param_2 - uVar4);
              return uVar3 | local_4;
            }
            if ((uVar3 & 0x200) != 0) {
              uVar3 = Job_EvalConditions(param_1,param_2 - uVar4);
              return uVar3 & local_4;
            }
            if ((uVar3 & 0x400) != 0) {
              iVar2 = Job_EvalConditions(param_1,param_2 - uVar4);
              return iVar2 == 0 & local_4;
            }
          }
          else {
            local_4 = local_4 | uVar1;
          }
        }
        else {
          local_4 = local_4 & uVar1 == 0;
        }
      }
      else {
        local_4 = local_4 & uVar1;
      }
      uVar3 = *(uint *)(param_1 + 0x60);
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 100;
    } while (uVar4 < param_2);
  }
  return local_4;
}

