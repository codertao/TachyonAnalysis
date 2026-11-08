
/* parse CONNECT group: LAND/SPAWN/DOCK/PICKUP/ENGINE_POINT[] hardpoints */

void Object_ParseHardpoints(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_1;
  clr_bytes(param_1,0x94);
  iVar2 = param_2;
  if (param_2 != 0) {
    iVar3 = Cbin_GetScalar(s_CONNECT_0054a20c,s_LAND_POINT_0054a214,0,0,&param_1);
    if (iVar3 != 0) {
      FUN_00462e30(iVar2,param_1,iVar1);
    }
    iVar3 = Cbin_GetScalar(s_CONNECT_0054a20c,s_SPAWN_POINT_0054a200,0,0,&param_1);
    if (iVar3 != 0) {
      FUN_00462e30(iVar2,param_1,iVar1 + 0x18);
    }
    iVar3 = Cbin_GetScalar(s_CONNECT_0054a20c,s_DOCK_POINT_0054a1f4,0,0,&param_1);
    if (iVar3 != 0) {
      FUN_00462e30(iVar2,param_1,iVar1 + 0x24);
    }
    iVar3 = Cbin_GetScalar(s_CONNECT_0054a20c,s_PICKUP_POINT_0054a1e4,0,0,&param_1);
    if (iVar3 != 0) {
      FUN_00462e30(iVar2,param_1,iVar1 + 0xc);
    }
    iVar3 = Cbin_CountEntries(s_CONNECT_0054a20c,s_ENGINE_POINT_0054a1d4);
    *(int *)(iVar1 + 0x30) = iVar3;
    if (iVar3 != 0) {
      Cbin_SelectGroup(s_CONNECT_0054a20c);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x30) != 0) {
        iVar3 = iVar1 + 0x34;
        do {
          FUN_0049b480(s_ENGINE_POINT_0054a1d4,0,0,&param_1);
          FUN_00462e30(iVar2,param_1,iVar3);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0xc;
        } while (uVar4 < *(uint *)(iVar1 + 0x30));
      }
    }
  }
  return;
}

