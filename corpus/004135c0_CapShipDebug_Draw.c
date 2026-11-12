
/* sweep */

void CapShipDebug_Draw(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xf4);
  if (iVar2 != 0) {
    if ((*(byte *)(*(int *)(iVar2 + 0xe4) + 0x34) & 6) != 0) {
      TurretDebug_DrawWeapon(iVar2);
      return;
    }
    if (*(int *)(iVar2 + 0xdc) != 0) {
      iVar2 = *(int *)(iVar2 + 0xdc);
    }
    uVar1 = EntDebug_DrawInfo(iVar2,*(undefined4 *)(iVar2 + 0xd8),iVar2 + 0xec,
                              s_CAPSHIP_DEBUG_00533f1c);
    uVar1 = AiDebug_DrawWaypoint(iVar2,iVar2 + 0xec,uVar1);
    CapShipDebug_DrawStats(iVar2,uVar1);
  }
  return;
}

