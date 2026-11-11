
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HUD layout RADAR/SPHERE screen geometry */

void Hud_LoadRadar(int param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int local_c;
  undefined4 local_8;
  
  iVar4 = param_1;
  piVar1 = (int *)(param_1 + 0x558);
  Cbin_GetParam(s_RADAR_00536988,s_SPHERE_00536990,0,0,piVar1,1,1);
  piVar2 = (int *)(iVar4 + 0x55c);
  Cbin_GetParam(s_RADAR_00536988,s_SPHERE_00536990,0,0,piVar2,1,2);
  Cbin_GetParam(s_RADAR_00536988,s_SPHERE_00536990,0,0,&param_1,1,3);
  Cbin_GetParam(s_RADAR_00536988,s_SPHERE_00536990,0,0,&local_c,1,4);
  fVar3 = (float)param_1 * _DAT_0052e828;
  *piVar1 = *piVar1 << 7;
  fVar3 = fVar3 * _DAT_0052e544;
  *(undefined4 *)(iVar4 + 0x554) = 0x1c;
  local_8 = (undefined4)(longlong)ROUND(fVar3);
  *(undefined4 *)(iVar4 + 0x550) = local_8;
  local_8 = (undefined4)(longlong)ROUND((float)local_c * _DAT_0052e828 * _DAT_0052e544);
  *(undefined4 *)(iVar4 + 0x54c) = local_8;
  *piVar2 = *piVar2 << 7;
  return;
}

