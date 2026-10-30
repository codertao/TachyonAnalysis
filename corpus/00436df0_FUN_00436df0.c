
void FUN_00436df0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = Sped_SpawnSimple(param_1,0,1,param_4);
  if (iVar1 != 0) {
    Sped_DispatchAction(param_1,0,0,param_4);
  }
  return;
}

