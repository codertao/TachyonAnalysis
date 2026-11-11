
/* parse SHIP .des CBIN into 0x6c8 ship struct (rotation/speed/shields/hull/weapons/mounts) */

int __cdecl Ship_LoadDes(char *desName,ShipDesc *out,int loadInterior)

{
  int iVar1;
  uint uVar2;
  ShipDesc *pSVar3;
  ShipDesc *pSVar4;
  int iVar5;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  clr_bytes(&g_ShipDesTemplate,0x6c8);
  clr_bytes(&DAT_005633c8,0x1a0);
  pSVar3 = out;
  pSVar4 = &g_ShipDesTemplate;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    pSVar4->descType = pSVar3->descType;
    pSVar3 = (ShipDesc *)&pSVar3->name;
    pSVar4 = (ShipDesc *)&pSVar4->name;
  }
  iVar1 = Cbin_Open(desName);
  if (iVar1 != 0) {
    iVar1 = FUN_0049bfc0(&PTR_g_ShipDesTemplate_shipName_0__00549728);
    if (iVar1 != 0) {
      ShipDes_ParseRotation(&out->flight);
      g_ShipDesTemplate.flight.field_78 = 20000;
      Cbin_GetParam(&DAT_00532af4,&DAT_00532c10,local_80,0x7f,0,4,1);
      g_ShipDesTemplate.field_544 = FUN_004580c0(local_80);
      g_ShipDesTemplate.otherNameCount =
           FUN_0048e820(DAT_005a6144,s_OTHER_SHIP_NAMES_00533a5c,&DAT_00563508);
      g_ShipDesTemplate.field_1c = FUN_00463cf0();
      ShipDes_ParseAiClasses(&g_ShipDesTemplate);
      FUN_00462d70(0x563254);
      g_ShipDesTemplate.flight.hull =
           (uint)(g_ShipDesStatScale * g_ShipDesTemplate.flight.hull) >> 8;
      g_ShipDesTemplate.flight.shieldMax =
           (uint)(g_ShipDesTemplate.flight.shieldMax * g_ShipDesStatScale) >> 8;
      ShipDes_Finalize(&g_ShipDesTemplate);
      g_ShipDesTemplate.flight.burnerTopSpeed =
           g_ShipDesTemplate.flight.burnerBoost * g_ShipDesTemplate.flight.maxSpeed;
      g_ShipDesTemplate.intPitchRange = g_ShipDesTemplate.intPitch2 - g_ShipDesTemplate.intPitch1;
      g_ShipDesTemplate.intVelPitchRange =
           g_ShipDesTemplate.intVelPitch2 - g_ShipDesTemplate.intVelPitch1;
      g_ShipDesTemplate.extPitchRange = g_ShipDesTemplate.extPitch2 - g_ShipDesTemplate.extPitch1;
      if (g_ShipDesTemplate.extVolume == 0) {
        g_ShipDesTemplate.extVolume = 0xff;
      }
      ModelPool_Load(0x562f90,0x562fc8,0x562fd8,0x562fd8,&g_ObjModelPool,1);
      if ((g_ShipDesTemplate.interiorPak1[0] != '\0') && (loadInterior != 0)) {
        ModelPool_Load(0x562f9c,0x562fa8,0,0x562fb8,&g_ObjModelPool,1);
      }
      Object_ParseHardpoints(0x563298,g_ShipDesTemplate.extModel);
      FUN_00463db0(0x563338);
      iVar1 = Cbin_GetScalar(s_CONNECT_0054a20c,s_LAND_POINT_0054a214,0,0,&local_84);
      if (iVar1 != 0) {
        FUN_00462e30(g_ShipDesTemplate.extModel,local_84,0x563298);
      }
      uVar2 = 0;
      if (g_ShipDesTemplate.totalMounts != 0) {
        iVar1 = 0x563010;
        iVar5 = 0x5631d0;
        do {
          FUN_004638a0(uVar2,iVar1,iVar5,g_ShipDesTemplate.extModel);
          uVar2 = uVar2 + 1;
          iVar5 = iVar5 + 0xc;
          iVar1 = iVar1 + 0x38;
        } while (uVar2 < (uint)g_ShipDesTemplate.totalMounts);
      }
      FUN_004639c0(&g_ShipDesTemplate,g_ShipDesTemplate.extModel);
      g_ShipDesTemplate.falloffCurve = FUN_00465f20(g_ShipDesTemplate.falloff1);
      if (DAT_00563528 != '\0') {
        g_ShipDesTemplate.anim = (void *)Anim_LoadFile(&DAT_00563528,1);
      }
      g_ShipDesTemplate.field_6c4 = FUN_00462c80(&DAT_00563558);
      FUN_00462dd0(0x56332c);
      g_ShipDesTemplate.classFlags = FUN_00463d50();
      if (g_ShipDesTemplate._1580_4_ != 0) {
        g_ShipDesTemplate.classFlags = g_ShipDesTemplate.classFlags | 0x800;
      }
      g_ShipDesTemplate.skill = ShipDes_ParseSkill(&DAT_00563538);
      Cbin_Close();
      g_ShipDesTemplate.aiTargetFilter = Ai_TargetFilter;
      pSVar3 = &g_ShipDesTemplate;
      for (iVar1 = 0x1b2; iVar1 != 0; iVar1 = iVar1 + -1) {
        out->descType = pSVar3->descType;
        pSVar3 = (ShipDesc *)&pSVar3->name;
        out = (ShipDesc *)&out->name;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

