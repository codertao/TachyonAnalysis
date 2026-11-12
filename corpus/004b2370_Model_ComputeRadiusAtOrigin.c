
/* refine: Model_ComputeRadius with zero origin */

void Model_ComputeRadiusAtOrigin(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  Model_ComputeRadius(param_1,&local_c,param_2);
  return;
}

