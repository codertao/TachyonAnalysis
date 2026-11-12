
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: "hud_LoadImage" */

void Hud_LoadImage(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar2 = param_1;
  if (param_4 == 0) {
    param_1[8] = (int)DAT_005b013c;
    puVar3 = DAT_005b013c;
  }
  else {
    Pak_SetLoadPalParams(g_PalBrightness,0x80,0x80,0x80,0x80);
    puVar3 = (undefined4 *)Pal_GetCached(param_4);
    param_1[8] = (int)puVar3;
  }
  puVar5 = &DAT_00603180;
  for (iVar4 = 0xc0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  if ((param_5 & 0x1000000) == 0) {
    iVar4 = Image_Load(param_2);
    *param_1 = iVar4;
    mark_alloc_memory_with_flags(iVar4,0xd400);
  }
  else {
    iVar4 = Image_LoadWithAlpha(param_2,param_3);
    *param_1 = iVar4;
    mark_alloc_memory_with_flags(iVar4,0xd400);
  }
  if (*param_1 == 0) {
    Error_CannotOpenFile(param_2,s_hud_LoadImage_005366a8);
  }
  param_1[6] = _DAT_00603100;
  param_1[7] = DAT_00603104;
  iVar4 = 0x1f;
  if (_DAT_00603100 != 0) {
    for (; _DAT_00603100 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar1 = 0x1f;
  if (DAT_00603104 != 0) {
    for (; DAT_00603104 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  param_1._0_1_ = (undefined1)iVar4;
  param_2._0_1_ = (undefined1)iVar1;
  piVar2[3] = param_5 + 8;
  *(undefined1 *)(piVar2 + 2) = param_1._0_1_;
  *(undefined1 *)((int)piVar2 + 9) = (undefined1)param_2;
  return;
}

