
/* (me, list, target): OR the rules of the group's SPX target-rule list (+0xc count, +0x10 rules,
   stride 0x1c); 2 = forbid */

uint Ai_RunTargetRules(undefined4 param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = param_3;
  pcVar1 = *(code **)(*(int *)(param_3 + 0x8c) + 0x40);
  iVar5 = *(int *)(param_2 + 0x10);
  uVar4 = 0;
  uVar6 = 0;
  if (pcVar1 != (code *)0x0) {
    uVar6 = (*pcVar1)(param_3);
  }
  param_3 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    do {
      uVar3 = Ai_EvalTargetRule(iVar5,iVar2,uVar6);
      uVar4 = uVar4 | uVar3;
      if ((uVar4 & 2) != 0) {
        return 2;
      }
      param_3 = param_3 + 1;
      iVar5 = iVar5 + 0x1c;
    } while (param_3 < *(uint *)(param_2 + 0xc));
  }
  return uVar4;
}

