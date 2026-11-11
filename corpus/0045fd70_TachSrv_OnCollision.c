
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* event 0x2009: other's desc+0x70 hook, else player dmg = maxShieldOrHull *
   clamp(min(v,1.25*maxSpd)/maxSpd*0.95, 0.2,1.25); same dmg to other entity (type 0x26) */

void TachSrv_OnCollision(int *param_1)

{
  void **ppvVar1;
  code *pcVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  SpED_SrvPlayer *pSVar6;
  int iVar7;
  float local_10;
  undefined4 local_c;
  undefined1 local_4 [4];
  
  pSVar6 = g_SrvCurShip;
  if (((GLBL_cheat_related1 == 0) || ((g_FlightStateFlags & 4) == 0)) && (g_SrvCurConn->dead == 0))
  {
    DAT_005653f4 = (SpED_SrvPlayer *)0x0;
    iVar7 = FUN_0045d680(param_1[1],g_SrvCurShip->quadrant);
    if (((iVar7 != 0) && (*(int *)(iVar7 + 0x8c) != 0)) &&
       (pcVar2 = *(code **)(*(int *)(iVar7 + 0x8c) + 0x70), pcVar2 != (code *)0x0)) {
      (*pcVar2)(iVar7,pSVar6,local_4);
      return;
    }
    if (0 < (pSVar6->power).hull) {
      ppvVar1 = &pSVar6->desc[1].getText;
      pvVar3 = pSVar6->desc[1].clientMessage;
      fVar4 = (float)pvVar3 * _DAT_0052e76c;
      fVar5 = (float)*param_1;
      if (fVar4 < (float)*param_1) {
        fVar5 = fVar4;
      }
      local_10 = (fVar5 / (float)pvVar3) * _DAT_0052e79c;
      if (_DAT_0052eb50 <= local_10) {
        if (_DAT_0052e76c < local_10) {
          local_10 = 1.25;
        }
      }
      else {
        local_10 = 0.2;
      }
      iVar7 = Shield_GetMax(&pSVar6->power,ppvVar1);
      local_c = (undefined4)(longlong)ROUND((float)iVar7 * local_10);
      Shield_ApplyDamage(local_c,0x100,0x100,0,&pSVar6->power,ppvVar1);
      if (param_1[1] != 0) {
        DAT_005653f4 = pSVar6;
        DAT_00565410 = 1;
        TachSrv_DamageEntityById(param_1[1],local_c);
      }
      if ((pSVar6->power).hull < 1) {
        DAT_00565410 = 2;
        TachSrv_OnShipKilled(pSVar6);
      }
    }
  }
  return;
}

