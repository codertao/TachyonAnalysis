
/* rule 6: object match -> 2 */

int TargetRule_IgnoreObject(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = TargetRule_ObjectMatch(param_1,param_2,param_3);
  return (-(uint)(iVar1 != 1) & 0xfffffffe) + 2;
}

