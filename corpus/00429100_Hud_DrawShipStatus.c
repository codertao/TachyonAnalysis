
/* HUD SHIELDS group: hull colour by %, FRONT brightness by +8, REAR brightness by +0x10 */

void Hud_DrawShipStatus(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_3 + 0x578);
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar2 = Power_GetHullMax(param_2,param_1 + 0xd0,DAT_005b9020);
  iVar2 = (iVar3 * 100) / iVar2;
  if (iVar2 < 0x46) {
    if (iVar2 < 0x1e) {
      if (iVar2 < 1) {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 4) = 0x960000;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 4) = 0xcff900;
    }
  }
  else {
    *(uint *)(iVar1 + 4) =
         (*(int *)(param_3 + 0x598) << 8 | *(uint *)(param_3 + 0x59c)) << 8 |
         *(uint *)(param_3 + 0x5a0);
  }
  FUN_004281f0(iVar1,*(undefined4 *)(param_3 + 0x57c),*(undefined4 *)(param_3 + 0x580),0,0xffffffff,
               *(undefined4 *)(param_3 + 0x584),*(undefined4 *)(param_3 + 0x588),
               *(undefined4 *)(param_3 + 0x58c),*(undefined4 *)(param_3 + 0x590));
  iVar1 = *(int *)(param_3 + 0x5a4);
  iVar2 = Shield_GetMax(&g_PlayerPower,param_1 + 0xd0);
  iVar3 = *(int *)(param_2 + 8);
  *(int *)(iVar1 + 4) =
       (((*(int *)(param_3 + 0x5c4) * iVar3) / iVar2) * 0x100 +
       (*(int *)(param_3 + 0x5c8) * iVar3) / iVar2) * 0x100 +
       (*(int *)(param_3 + 0x5cc) * iVar3) / iVar2;
  FUN_004281f0(iVar1,*(undefined4 *)(param_3 + 0x5a8),*(undefined4 *)(param_3 + 0x5ac),0,0xffffffff,
               *(undefined4 *)(param_3 + 0x5b0),*(undefined4 *)(param_3 + 0x5b4),
               *(undefined4 *)(param_3 + 0x5b8),*(undefined4 *)(param_3 + 0x5bc));
  iVar1 = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(param_3 + 0x5d0);
  *(int *)(iVar3 + 4) =
       (((*(int *)(param_3 + 0x5f0) * iVar1) / iVar2) * 0x100 +
       (*(int *)(param_3 + 0x5f4) * iVar1) / iVar2) * 0x100 +
       (*(int *)(param_3 + 0x5f8) * iVar1) / iVar2;
  FUN_004281f0(iVar3,*(undefined4 *)(param_3 + 0x5d4),*(undefined4 *)(param_3 + 0x5d8),0,0xffffffff,
               *(undefined4 *)(param_3 + 0x5dc),*(undefined4 *)(param_3 + 0x5e0),
               *(undefined4 *)(param_3 + 0x5e4),*(undefined4 *)(param_3 + 0x5e8));
  return;
}

