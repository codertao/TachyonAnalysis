
/* sweep */

int SceneKey_CountMoves(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  uVar3 = 0;
  uVar4 = param_2[1];
  if (*param_2 != 0) {
    do {
      iVar1 = SceneKey_FindMoveType(param_1,uVar4);
      if (iVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 100;
    } while (uVar3 < *param_2);
  }
  return iVar2;
}

