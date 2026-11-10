
/* dispatch one 28-B SPX target rule via table 0x53219c[type] -> bits 1 allow / 4 prefer / 2 forbid
    */

undefined4 Ai_EvalTargetRule(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((code *)(&PTR_TargetRule_Any_0053219c)[*param_1] != (code *)0x0) {
    uVar1 = (*(code *)(&PTR_TargetRule_Any_0053219c)[*param_1])(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}

