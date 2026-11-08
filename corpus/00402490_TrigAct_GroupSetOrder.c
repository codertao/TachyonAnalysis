
/* action 6/3: Ship_Update(member, 2, arg2) for each live member */

void TrigAct_GroupSetOrder
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  for (iVar1 = FUN_00457da0(param_4,param_1); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xfc)) {
    Ship_Update(iVar1,2,param_2);
  }
  return;
}

