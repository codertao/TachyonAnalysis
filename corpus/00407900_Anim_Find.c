
/* by ANIM_NAME */

int Anim_Find(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar1 = str_cmp(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x54;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return 0;
}

