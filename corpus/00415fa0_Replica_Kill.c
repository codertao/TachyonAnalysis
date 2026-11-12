
/* sweep */

void Replica_Kill(undefined4 param_1,undefined4 param_2)

{
  List_RemoveW(param_1,&DAT_005b3280);
  Replica_Destroy(param_1,param_2);
  return;
}

