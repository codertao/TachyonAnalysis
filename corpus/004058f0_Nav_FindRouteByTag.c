
/* (tag, def, quadrant) -> index of SPX route (waygroup) whose +0x08 tag == tag; logs WAYGROUP %d
   NOT FOUND, returns 0 */

uint Nav_FindRouteByTag(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 local_40 [64];
  
  iVar1 = Sped_GetDefList(param_2,param_3);
  if (iVar1 == 0) {
    Sector_LogMissingSpedData(*(undefined4 *)(param_2 + 0x20));
    return 0;
  }
  uVar2 = 0;
  if (*(uint *)(iVar1 + 0x8c) != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x90) + 8);
    do {
      if (*piVar3 == param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 5;
    } while (uVar2 < *(uint *)(iVar1 + 0x8c));
  }
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_WAYGROUP__d_NOT_FOUND_005326ac,param_1);
    SrvSend_TextMsg(local_40,0,0,0,0,param_3,DAT_005a6320._2_1_);
  }
  return 0;
}

