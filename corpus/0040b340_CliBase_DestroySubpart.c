
/* sweep */

void CliBase_DestroySubpart(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = PartChain_FindById_d4(param_1,param_2);
  if (iVar1 != 0) {
    Replica_Despawn(iVar1);
  }
  return;
}

