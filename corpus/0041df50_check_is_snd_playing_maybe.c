
int check_is_snd_playing_maybe(undefined4 name)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (GLBL_ACTIVE_SND_CNT != 0) {
    iVar4 = GLBL_ACTIVE_SNDS_PTR_MAYBE + 0x10;
    iVar2 = GLBL_ACTIVE_SNDS_PTR_MAYBE;
    do {
      iVar1 = __stricmp(iVar4,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x70;
      iVar4 = iVar4 + 0x70;
    } while (uVar3 < GLBL_ACTIVE_SND_CNT);
  }
  return 0;
}

