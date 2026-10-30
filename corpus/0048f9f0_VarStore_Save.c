
/* write store back to a path */

void VarStore_Save(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a0d60(param_1);
  if (iVar1 != -1) {
    FUN_004a0ef0(param_2,*param_2);
    FUN_004a0ec0();
    return;
  }
  return;
}

