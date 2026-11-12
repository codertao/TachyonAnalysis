
/* sweep */

void Scene_MoveMembers(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    piVar1 = (int *)(param_1[1] + 0x30);
    do {
      if ((*piVar1 != 0) && ((*(byte *)(piVar1 + 1) & 0x10) == 0)) {
        SceneMember_Move(*piVar1);
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x19;
    } while (uVar2 < *param_1);
  }
  return;
}

