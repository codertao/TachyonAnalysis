
/* sweep */

void HudIndicator_Draw(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x11];
  if (((code *)param_1[0x13] != (code *)0x0) && (iVar1 = (*(code *)param_1[0x13])(), iVar1 == 0)) {
    return;
  }
  if ((param_1[0x12] & DAT_005b1b24) != 0) {
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = (param_1[8] << 8 | param_1[9]) << 8 | param_1[10];
    }
    Hud_DrawSprite(*param_1,param_1[1],param_1[2],0,0xffffffff,param_1[3],param_1[4],param_1[5],
                   param_1[6]);
    iVar2 = DAT_005b1b28;
  }
  if (param_1[0xb] != 0) {
    Hud_DrawStringId(param_1[0xb],param_1[0xe],param_1[0xc],param_1[0xd],iVar2,0,param_1[0x10]);
  }
  return;
}

