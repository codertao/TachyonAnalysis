
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HUD speed = round(|v| raw/frame x 400/65536) + ' M' (= .des MAX_SPEED units) */

void Hud_DrawSpeed(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_48;
  char local_40 [64];
  
  FUN_0048e800(DAT_005a6140,*(undefined4 *)(param_1 + 0x4a4));
  if (DAT_005b1edc == 0) {
    if (DAT_005b1ee8 == 0) {
      local_48 = (undefined4)(longlong)ROUND((float)DAT_005b1ee0 * _DAT_0052e81c);
      str_sprintf(local_40,&DAT_00535eb8,local_48);
      goto LAB_004284a4;
    }
    uVar2 = FUN_0048e800(DAT_005a6140,0x1f);
  }
  else {
    uVar2 = FUN_0048e800(DAT_005a6140,0x22);
  }
  str_sprintf(local_40,&DAT_00536768,uVar2);
LAB_004284a4:
  FUN_004281a0(local_40,*(undefined4 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4a8),
               *(undefined4 *)(param_1 + 0x4ac),*(undefined4 *)(param_1 + 0x4bc),0,
               *(undefined4 *)(param_1 + 0x4b8));
  FUN_0048e800(DAT_005a6140,*(undefined4 *)(param_1 + 0x4c0));
  local_48 = (undefined4)(longlong)ROUND(DAT_005b1ecc * _DAT_0052e818);
  str_sprintf(local_40,&DAT_00535eb8,local_48);
  if (DAT_005b1f00 != 0) {
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_00536764;
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
    pcVar6 = local_40;
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
  FUN_004281a0(local_40,*(undefined4 *)(param_1 + 0x4cc),*(undefined4 *)(param_1 + 0x4c4),
               *(undefined4 *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4d8),0,
               *(undefined4 *)(param_1 + 0x4d4));
  return;
}

