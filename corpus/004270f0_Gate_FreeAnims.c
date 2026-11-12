
/* sweep */

void Gate_FreeAnims(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = DAT_005b3280; iVar2 = DAT_005b31c0, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if ((*(short *)(iVar1 + 0x76) == 0x13) && (*(int *)(iVar1 + 0xd0) != 0)) {
      Anim_Free(*(int *)(iVar1 + 0xd0),0);
    }
  }
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    if ((*(short *)(iVar2 + 0x76) == 10) && (*(int *)(iVar2 + 0xd0) != 0)) {
      Anim_Free(*(int *)(iVar2 + 0xd0),0);
    }
  }
  return;
}

