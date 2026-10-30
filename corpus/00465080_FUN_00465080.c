
int FUN_00465080(undefined4 param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_64 [32];
  char local_44 [68];
  
  if (*param_2 == 0) {
    return param_3;
  }
  param_3 = param_3 + (uint)*(byte *)(*DAT_005b2770 + 4);
  uVar2 = FUN_00492bf0(param_2);
  str_sprintf(local_44,s__s___s_00534230,param_1,uVar2);
  if (*(int *)(*param_2 + 0x50) != 0) {
    str_sprintf(local_64,s___d__0054a470,param_2[0xb]);
    uVar3 = 0xffffffff;
    pcVar6 = local_64;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar6 = local_44;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  FUN_0048e970(local_44,DAT_005b2770,0x1c,param_3,0xffff00,0xffff,0x10000,2);
  return param_3;
}

