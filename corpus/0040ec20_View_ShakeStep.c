
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void View_ShakeStep(void)

{
  int iVar1;
  int local_8;
  
  DAT_005b1ed4 = DAT_005b1ed4 + 1 & 7;
  local_8 = (int)(longlong)ROUND((float)*(int *)(&DAT_00533a88 + DAT_005b1ed4 * 8) * _DAT_005b1ed8);
  iVar1 = local_8;
  DAT_005b966c = local_8;
  local_8 = (int)(longlong)ROUND((float)*(int *)(&DAT_00533a8c + DAT_005b1ed4 * 8) * _DAT_005b1ed8);
  DAT_005b9670 = local_8;
  Hud_SetOffset(iVar1,local_8);
  DAT_005a67d4 = DAT_005a67d4 + DAT_005b966c * 0x80;
  DAT_005a67d8 = DAT_005a67d8 + DAT_005b9670 * 0x80;
  DAT_005a67dc = DAT_005a67dc + DAT_005b966c;
  DAT_005a67e0 = DAT_005a67e0 + DAT_005b9670;
  return;
}

