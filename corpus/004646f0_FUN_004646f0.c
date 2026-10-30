
void FUN_004646f0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_2 == 1) {
    if (*(short *)(param_1 + 0x76) == 1) {
      *(undefined4 *)param_3 = s_PLAYER_005339a8._0_4_;
      *(undefined2 *)(param_3 + 4) = s_PLAYER_005339a8._4_2_;
      param_3[6] = s_PLAYER_005339a8[6];
      return;
    }
    FUN_00436470(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18),*(undefined4 *)(param_1 + 0xd8),
                 param_1 + 0xdc,param_3);
  }
  else {
    if (param_2 == 3) {
      FUN_004363b0(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x54),s_FLIGHT_GROUP_00533ed0,param_3)
      ;
      return;
    }
    if ((param_2 == 4) && (param_3 != (char *)0x0)) {
      pcVar2 = (char *)FUN_00458060(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x544));
      uVar3 = 0xffffffff;
      do {
        pcVar5 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar2 = pcVar5 + -uVar3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)param_3 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        param_3 = param_3 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_3 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        param_3 = param_3 + 1;
      }
      return;
    }
  }
  return;
}

