
/* sweep */

void Base_SpawnReplicaParts(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_1;
  piVar1 = *(int **)(param_3 + 0x94);
  uVar5 = 0;
  iVar2 = piVar1[1];
  if (*piVar1 != 1) {
    do {
      iVar4 = IntArray_Contains(*(undefined4 *)(iVar2 + 0xc4),param_2 + 1,*param_2);
      if (iVar4 == 0) {
        iVar4 = BasePart_SpawnReplica
                          (iVar2 + 0x80,0,param_3,piVar1,iVar3,*(undefined1 *)(iVar3 + 0xc2));
        if (iVar4 == 0) {
          return;
        }
        *(int *)(param_1 + 0xe0) = iVar4;
        param_1 = iVar4;
      }
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0x80;
    } while (uVar5 < *piVar1 - 1U);
  }
  return;
}

