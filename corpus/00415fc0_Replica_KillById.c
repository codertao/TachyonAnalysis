
/* sweep */

void Replica_KillById(int param_1)

{
  int iVar1;
  
  if (param_1 != -1) {
    iVar1 = Dcb_FindById(param_1);
    if (iVar1 != 0) {
      Replica_Kill(iVar1,1);
    }
  }
  return;
}

