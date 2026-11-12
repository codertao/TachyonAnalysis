
/* sweep: "STARBASES" */

undefined4 Starbase_RegisterName(undefined4 param_1)

{
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  Var_LookupEquate(s_STARBASES_00532e38,param_1,&local_4);
  return local_4;
}

