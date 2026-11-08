
int FUN_0041e6d0(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_10;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_10 = DAT_00562b14;
  local_1 = 0;
  iVar2 = check_is_snd_playing_maybe(param_1);
  if (iVar2 == 0) {
    iVar2 = Cbin_Open(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = Cbin_GetScalar(&DAT_00532af4,&DAT_00532c70,&local_10,0x10,0);
    if (iVar2 == 0) {
      return 0;
    }
    GLBL_ACTIVE_SND_CNT = GLBL_ACTIVE_SND_CNT + 1;
    if (GLBL_ACTIVE_SNDS_PTR_MAYBE == 0) {
      FUN_0048e3a0(&GLBL_ACTIVE_SNDS_PTR_MAYBE,0x3800,4,s_DIALOG_ACTOR_ARRAY_005356c8,0xd000);
    }
    iVar2 = GLBL_ACTIVE_SND_CNT * 0x70 + -0x70 + GLBL_ACTIVE_SNDS_PTR_MAYBE;
    clr_bytes(iVar2,0x70);
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    pcVar6 = (char *)(iVar2 + 0x10);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_0041dfa0(iVar2);
    FUN_0041e600(iVar2);
    FUN_0041e380(iVar2,param_2);
    Cbin_Close();
  }
  return iVar2;
}

