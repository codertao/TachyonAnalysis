
/* sweep */

void SceneMember_Resolve(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar1 = Replica_FindByLabel(*(undefined4 *)(param_2 + 4));
    *(int *)(param_2 + 0x30) = iVar1;
    if (iVar1 != 0) {
      SceneMember_SnapToEnt(param_2);
    }
  }
  return;
}

