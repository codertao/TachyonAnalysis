
/* sweep */

void Mem_AllocTagged(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = Mem_AllocChecked(param_2,param_3,0,param_4,param_5);
  *param_1 = uVar1;
  return;
}

