
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* event 0x2009: other's desc+0x70 hook, else player dmg = maxShieldOrHull *
   clamp(min(v,1.25*maxSpd)/maxSpd*0.95, 0.2,1.25); same dmg to other entity (type 0x26) */

void TachSrv_OnCollision(int *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float local_10;
  undefined4 local_c;
  undefined1 local_4 [4];
  
  iVar5 = DAT_0058b064;
  if (((GLBL_cheat_related1 == 0) || ((g_FlightStateFlags & 4) == 0)) &&
     (*(int *)(DAT_0058b068 + 0x1d0) == 0)) {
    DAT_005653f4 = 0;
    iVar6 = FUN_0045d680(param_1[1],*(undefined4 *)(DAT_0058b064 + 100));
    if (((iVar6 != 0) && (*(int *)(iVar6 + 0x8c) != 0)) &&
       (pcVar1 = *(code **)(*(int *)(iVar6 + 0x8c) + 0x70), pcVar1 != (code *)0x0)) {
      (*pcVar1)(iVar6,iVar5,local_4);
      return;
    }
    if (0 < *(int *)(iVar5 + 0x140)) {
      iVar6 = *(int *)(iVar5 + 0x8c) + 0xd0;
      fVar2 = *(float *)(*(int *)(iVar5 + 0x8c) + 0xbc);
      fVar3 = fVar2 * _DAT_0052e76c;
      fVar4 = (float)*param_1;
      if (fVar3 < (float)*param_1) {
        fVar4 = fVar3;
      }
      local_10 = (fVar4 / fVar2) * _DAT_0052e79c;
      if (_DAT_0052eb50 <= local_10) {
        if (_DAT_0052e76c < local_10) {
          local_10 = 1.25;
        }
      }
      else {
        local_10 = 0.2;
      }
      iVar7 = Shield_GetMax(iVar5 + 0x11c,iVar6);
      local_c = (undefined4)(longlong)ROUND((float)iVar7 * local_10);
      Shield_ApplyDamage(local_c,0x100,0x100,0,iVar5 + 0x11c,iVar6);
      if (param_1[1] != 0) {
        DAT_005653f4 = iVar5;
        DAT_00565410 = 1;
        TachSrv_DamageEntityById(param_1[1],local_c);
      }
      if (*(int *)(iVar5 + 0x140) < 1) {
        DAT_00565410 = 2;
        TachSrv_OnShipKilled(iVar5);
      }
    }
  }
  return;
}

