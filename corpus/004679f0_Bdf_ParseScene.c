
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* parse .bdf via Cbin_* into scene struct (SPACE_PAK/SPACE_ROT/IMAGES/LIGHTNING/fog/...) */

void Bdf_ParseScene(float param_1,int param_2)

{
  vec3 *fvec;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int local_50;
  longlong local_4c;
  vec3 local_44;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [24];
  
  iVar4 = Cbin_Open(param_1);
  iVar3 = param_2;
  if (iVar4 != 0) {
    fvec = (vec3 *)(param_2 + 0x38);
    fvec->x = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0x10000;
    iVar4 = Cbin_GetParam(&DAT_00532af4,s_SPACE_PAK_0054a694,local_28,0x10,0,4,1);
    if (iVar4 != 0) {
      Cbin_GetParam(&DAT_00532af4,s_SPACE_PAK_0054a694,local_38,0x10,0,4,3);
      Pak_SetForcedTexFlags(0x30002400);
      ModelPool_Load(iVar3 + 0x10,local_28,local_38,local_38,&g_FxModelPool,0);
      Pak_SetForcedTexFlags(0);
      Cbin_GetParam(&DAT_00532af4,s_SPACE_ROT_0054a688,0,0,&param_1,2,1);
      local_4c = (longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
      *(int *)(iVar3 + 0x1c) = (int)local_4c;
      Cbin_GetParam(&DAT_00532af4,s_SPACE_ROT_0054a688,0,0,&param_1,2,2);
      local_4c = (longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
      *(int *)(iVar3 + 0x20) = (int)local_4c;
    }
    iVar4 = Cbin_GetParam(&DAT_00532af4,s_LIGHTNING_PAK_0054a678,local_28,0x10,0,4,1);
    if (iVar4 != 0) {
      Cbin_GetParam(&DAT_00532af4,s_LIGHTNING_PAK_0054a678,local_38,0x10,0,4,3);
      Pak_SetForcedTexFlags(0x30002400);
      ModelPool_Load(iVar3 + 0x28,local_28,local_38,local_38,&g_FxModelPool,0);
    }
    Cbin_GetScalar(&DAT_00532af4,s_AMBIENT_LIGHT_0054a668,0,0,&local_50);
    *(int *)(iVar3 + 0xc0) = local_50 >> 1;
    Cbin_GetScalar(&DAT_00532af4,s_LIGHTNING_AMBIENT_LIGHT_0054a650,0,0,&local_50);
    *(int *)(iVar3 + 0x34) = local_50 >> 1;
    iVar4 = Cbin_GetParam(&DAT_00532af4,s_LIGHTNING_LIGHT_SRC_0054a63c,0,0,&param_1,2,1);
    if (iVar4 != 0) {
      local_4c = (longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
      local_44.x = (int)local_4c;
      Cbin_GetParam(&DAT_00532af4,s_LIGHTNING_LIGHT_SRC_0054a63c,0,0,&param_1,2,2);
      local_44.z = 0;
      local_4c = (longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
      local_44.y = (int)local_4c;
      Rot_FromAngles(local_18,&local_44);
      some_rotate_by_global(fvec,fvec);
    }
    Cbin_GetScalar(&DAT_00532af4,s_GAMMA_00535df0,0,0,iVar3 + 0xac);
    Cbin_GetScalar(&DAT_00532af4,s_SATURATION_0054a630,0,0,iVar3 + 0xb0);
    Cbin_GetScalar(&DAT_00532af4,s_LIGHTNING_0054a624,0,0,iVar3 + 0xd8);
    Cbin_GetParam(&DAT_00532af4,&DAT_0053fdec,0,0,iVar3 + 0xb4,1,1);
    Cbin_GetParam(&DAT_00532af4,&DAT_0053fdec,0,0,iVar3 + 0xb8,1,2);
    Cbin_GetParam(&DAT_00532af4,&DAT_0053fdec,0,0,iVar3 + 0xbc,1,3);
    iVar4 = Cbin_GetParam(&DAT_00532af4,s_LIGHT_RGB_0054a618,0,0,(undefined4 *)(iVar3 + 0x138),1,1);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x138) = 0xff;
      *(undefined4 *)(iVar3 + 0x13c) = 0xff;
      *(undefined4 *)(iVar3 + 0x140) = 0xff;
    }
    else {
      Cbin_GetParam(&DAT_00532af4,s_LIGHT_RGB_0054a618,0,0,iVar3 + 0x13c,1,2);
      Cbin_GetParam(&DAT_00532af4,s_LIGHT_RGB_0054a618,0,0,iVar3 + 0x140,1,3);
    }
    Cbin_SelectGroup(s_IMAGES_005355cc);
    Bdf_ParseImageEntry(&DAT_0054a614,iVar3 + 0x44,0x5140000);
    iVar4 = Cbin_CountEntries(s_IMAGES_005355cc,s_IMAGE_005355d4);
    *(int *)(iVar3 + 200) = iVar4;
    if (iVar4 != 0) {
      Mem_AllocZeroTagged((int *)(iVar3 + 0xcc),iVar4 * 100,4,s_BDF_IMAGES_0054a608,DAT_005b9098);
      Cbin_SelectGroup(s_IMAGES_005355cc);
      iVar4 = *(int *)(iVar3 + 0xcc);
      uVar6 = 0;
      if (*(int *)(iVar3 + 200) != 0) {
        do {
          Bdf_ParseImageEntry(s_IMAGE_005355d4,iVar4,0);
          uVar6 = uVar6 + 1;
          iVar4 = iVar4 + 100;
        } while (uVar6 < *(uint *)(iVar3 + 200));
      }
    }
    Cbin_GetScalar(s_IMAGES_005355cc,s_LENS_FLARE_0054a5fc,0,0,iVar3 + 0xa8);
    iVar4 = Cbin_GetScalar(&PTR_Loadout_CallHandler_part_0054a5f8,s_ENABLED_005347a4,0,0,
                           iVar3 + 0xdc);
    if (iVar4 != 0) {
      piVar1 = (int *)(iVar3 + 0xe0);
      Cbin_GetScalar(&PTR_Loadout_CallHandler_part_0054a5f8,&PTR_DAT_0054a5f4,0,0,piVar1);
      piVar2 = (int *)(iVar3 + 0xe4);
      Cbin_GetScalar(&PTR_Loadout_CallHandler_part_0054a5f8,&PTR_DAT_0054a5f0,0,0,piVar2);
      Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,&DAT_0053fdec,0,0,iVar3 + 0xe8,1,1);
      Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,&DAT_0053fdec,0,0,iVar3 + 0xec,1,2);
      Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,&DAT_0053fdec,0,0,iVar3 + 0xf0,1,3);
      Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,s_CLOUD_RGB_0054a5e4,0,0,iVar3 + 0xf4,1,1
                   );
      Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,s_CLOUD_RGB_0054a5e4,0,0,iVar3 + 0xf8,1,2
                   );
      Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,s_CLOUD_RGB_0054a5e4,0,0,iVar3 + 0xfc,1,3
                   );
      iVar4 = Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,s_BACK_RGB_0054a5d8,0,0,
                            (undefined4 *)(iVar3 + 0x100),1,1);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar3 + 0x100) = 0x40;
        *(undefined4 *)(iVar3 + 0x104) = 0x40;
        *(undefined4 *)(iVar3 + 0x108) = 0x40;
      }
      else {
        Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,s_BACK_RGB_0054a5d8,0,0,iVar3 + 0x104,1
                      ,2);
        Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,s_BACK_RGB_0054a5d8,0,0,iVar3 + 0x108,1
                      ,3);
      }
      iVar4 = Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,s_FRONT_RGB_0054a5cc,0,0,
                            (undefined4 *)(iVar3 + 0x10c),1,1);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar3 + 0x10c) = 0x80;
        *(undefined4 *)(iVar3 + 0x110) = 0x80;
        *(undefined4 *)(iVar3 + 0x114) = 0x80;
      }
      else {
        Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,s_FRONT_RGB_0054a5cc,0,0,iVar3 + 0x110,
                      1,2);
        Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,s_FRONT_RGB_0054a5cc,0,0,iVar3 + 0x114,
                      1,3);
      }
      iVar4 = Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,&DAT_0054a5c8,0,0,
                            (undefined4 *)(iVar3 + 0x118),2,1);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar3 + 0x118) = 0x40000000;
        *(undefined4 *)(iVar3 + 0x11c) = 0x10;
        *(undefined4 *)(iVar3 + 0x120) = 0xa0;
      }
      else {
        Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,&DAT_0054a5c8,0,0,iVar3 + 0x11c,1,2);
        Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,&DAT_0054a5c8,0,0,iVar3 + 0x120,1,3);
      }
      pcVar5 = (char *)(iVar3 + 0x124);
      *piVar1 = *piVar1 << 0xd;
      *piVar2 = *piVar2 << 0xd;
      Cbin_GetParam(&PTR_Loadout_CallHandler_part_0054a5f8,&PTR_DAT_0054a5c4,pcVar5,0x10,0,4,1);
      if (*pcVar5 == '\0') {
        str_sprintf(pcVar5,s_fog1_01_pcx_0054a5b8);
      }
    }
    Cbin_Close();
    Pak_SetForcedTexFlags(0);
  }
  return;
}

