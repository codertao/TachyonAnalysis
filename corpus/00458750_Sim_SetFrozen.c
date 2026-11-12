
/* sweep: guess, returns old */

undefined4 Sim_SetFrozen(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_005a652c;
  DAT_005a652c = param_1;
  return uVar1;
}

