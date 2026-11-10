
/* rule 4: object match -> 5 */

int TargetRule_PreferObject(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = TargetRule_ObjectMatch(param_1,param_2,param_3);
  return (-(uint)(iVar1 != 1) & 0xfffffffb) + 5;
}

