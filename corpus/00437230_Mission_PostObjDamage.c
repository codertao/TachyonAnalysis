
/* event {1,obj,3,damage%} */

void Mission_PostObjDamage
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = 1;
  local_14 = param_1;
  local_10 = 3;
  local_c = FUN_0048ec60(param_2,param_3);
  local_c = 100 - local_c;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  Mission_PostEvent(&local_18,param_4);
  return;
}

