
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a540(uint *param_1,int *param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int local_28;
  undefined1 local_20 [32];
  
  piVar1 = param_2;
  str_sprintf(local_20,s_FRAME__02d_00549290,param_3);
  Cbin_GetParam(local_20,&DAT_005327dc,0,0,&param_3,2,1);
  local_28 = (int)(longlong)ROUND(param_3 * _DAT_0052e548);
  *param_2 = local_28;
  if (local_28 < 1) {
    *param_2 = 1;
  }
  Cbin_GetParam(local_20,s_PAUSE_005327d4,0,0,&param_3,2,1);
  local_28 = (int)(longlong)ROUND(param_3 * _DAT_0052e548);
  param_2[1] = local_28;
  iVar2 = FUN_00459c60(local_20,param_1);
  param_2[2] = iVar2;
  FUN_0048e3d0(param_2 + 3,iVar2 * 0x3c,4,s_KEYFRAME_MEMBER_BUFFER_00549278,0xcccc);
  param_2 = (int *)param_2[3];
  uVar3 = param_1[1];
  uVar4 = 0;
  if (*param_1 != 0) {
    do {
      iVar2 = FUN_00459bf0(local_20,uVar3);
      if (iVar2 != 0) {
        FUN_0045a110(local_20,uVar3,param_2);
        param_2 = (int *)((int)param_2 + 0x3c);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 100;
    } while (uVar4 < *param_1);
  }
  piVar5 = piVar1 + 4;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  FUN_0045a4c0(local_20,piVar1 + 4);
  return;
}

