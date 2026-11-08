
void FUN_0040e530(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 local_60 [32];
  undefined1 local_40 [64];
  
  uVar6 = 0;
  uVar7 = 0;
  FUN_0044ed70(local_40);
  uVar1 = FUN_004580c0(s_GALSPAN_00533548);
  uVar2 = FUN_004580c0(&DAT_00533540);
  uVar3 = FUN_0040e310(uVar1);
  uVar4 = FUN_0040e310(uVar2);
  if (GLBL_spacesav[0x6c] == 0) {
    pcVar8 = s_PLAYER_005339a8;
  }
  else {
    pcVar8 = s_SERVER_005339a0;
  }
  str_sprintf(local_60,pcVar8);
  iVar5 = FUN_0040cf70(uVar1);
  if (iVar5 != 0) {
    uVar7 = *(undefined4 *)(iVar5 + 4);
  }
  iVar5 = FUN_0040cf70(uVar2);
  if (iVar5 != 0) {
    uVar6 = *(undefined4 *)(iVar5 + 4);
  }
  str_sprintf(param_1,s_REGION__s_BORA_CNT__d_GSPAN_CNT__00533948,local_40,uVar4,uVar3,uVar6,uVar7,
              GLBL_spacesav[100],local_60,GLBL_spacesav[0x6f]);
  return;
}

