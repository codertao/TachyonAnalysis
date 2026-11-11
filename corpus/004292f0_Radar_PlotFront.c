
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* front-hemisphere blip, disc radius 0xf80 */

void Radar_PlotFront(int param_1,int param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_14;
  float local_c;
  float local_8;
  
  uVar2 = dist_2d(param_1,param_2,GLBL_SOME_2D_X,GLBL_SOME_2D_Y);
  if (uVar2 < 0xf81) {
    lVar1 = (longlong)(param_1 - GLBL_SOME_2D_X) * (longlong)DAT_005b0730;
    iVar4 = GLBL_SOME_2D_X + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(param_2 - GLBL_SOME_2D_Y) * (longlong)DAT_005b072c;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  else {
    local_8 = (float)(param_1 - GLBL_SOME_2D_X);
    local_c = (float)(param_2 - GLBL_SOME_2D_Y);
    normalize_vec2(&local_8,&local_c);
    local_8 = local_8 * _DAT_0052e820;
    local_c = local_c * _DAT_0052e820;
    local_14 = (int)(longlong)ROUND(local_8);
    iVar4 = GLBL_SOME_2D_X +
            ((uint)((longlong)local_14 * (longlong)DAT_005b0730) >> 0x10 |
            (int)((ulonglong)((longlong)local_14 * (longlong)DAT_005b0730) >> 0x20) << 0x10);
    local_14 = (int)(longlong)ROUND(local_c);
    uVar2 = (uint)((longlong)local_14 * (longlong)DAT_005b072c) >> 0x10 |
            (int)((ulonglong)((longlong)local_14 * (longlong)DAT_005b072c) >> 0x20) << 0x10;
  }
  lVar1 = (longlong)((iVar4 >> 7) + DAT_005b0140) * (longlong)DAT_005a67e4;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(((int)(uVar2 + GLBL_SOME_2D_Y) >> 7) + DAT_005b0144) * (longlong)DAT_005a67e4;
  uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (DAT_005b0984 != 0) {
    FUN_0042a2b0(&DAT_005b01e0,uVar3,uVar2,param_3,param_4);
    return;
  }
  FUN_00452180(2);
  Gfx_DrawLine(uVar3,uVar2,uVar3 + 1,uVar2,param_3);
  iVar4 = uVar2 + 1;
  Gfx_DrawLine(uVar3,iVar4,uVar3 + 1,iVar4,param_3);
  if (param_4 != 0) {
    Gfx_DrawLine(uVar3 - 1,uVar2,uVar3 - 1,iVar4,DAT_005a6324 & 0xff);
    Gfx_DrawLine(uVar3 + 2,uVar2,uVar3 + 2,iVar4,DAT_005a6324 & 0xff);
  }
  return;
}

