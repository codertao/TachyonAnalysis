
void Anim_ParseAll(int param_1)

{
  int iVar1;
  uint uVar2;
  
  Anim_ReadNames(param_1);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      Anim_ParseAnim(param_1,iVar1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x54;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

