
void FUN_00406090(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Cbin_SelectGroup(s_ANIM_NAMES_0053278c);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        FUN_0049b480(s_ANIM_NAME_00532780,iVar1,0x18,0);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x54;
      } while (uVar2 < *(uint *)(param_1 + 4));
    }
  }
  return;
}

