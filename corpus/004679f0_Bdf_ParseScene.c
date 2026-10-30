
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* parse .bdf via Cbin_* into scene struct (SPACE_PAK/SPACE_ROT/IMAGES/LIGHTNING/fog/...) */

void Bdf_ParseScene(float param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int local_50;
  longlong local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [24];
  
  iVar5 = Cbin_Open(param_1);
  iVar4 = param_2;
  if (iVar5 != 0) {
    puVar1 = (undefined4 *)(param_2 + 0x38);
    *puVar1 = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0x10000;
    iVar5 = Cbin_GetParam(&DAT_00532af4,s_SPACE_PAK_0054a694,local_28,0x10,0,4,1);
    if (iVar5 != 0) {
      Cbin_GetParam(&DAT_00532af4,s_SPACE_PAK_0054a694,local_38,0x10,0,4,3);
      FUN_004b1ca0(0x30002400);
      FUN_00431850(iVar4 + 0x10,local_28,local_38,local_38,&DAT_005ac548,0);
      FUN_004b1ca0(0);
      Cbin_GetParam(&DAT_00532af4,s_SPACE_ROT_0054a688,0,0,&param_1,2,1);
      local_4c = (longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
      *(undefined4 *)(iVar4 + 0x1c) = (undefined4)local_4c;
      Cbin_GetParam(&DAT_00532af4,s_SPACE_ROT_0054a688,0,0,&param_1,2,2);
      local_4c = (longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
      *(undefined4 *)(iVar4 + 0x20) = (undefined4)local_4c;
    }
    iVar5 = Cbin_GetParam(&DAT_00532af4,s_LIGHTNING_PAK_0054a678,local_28,0x10,0,4,1);
    if (iVar5 != 0) {
      Cbin_GetParam(&DAT_00532af4,s_LIGHTNING_PAK_0054a678,local_38,0x10,0,4,3);
      FUN_004b1ca0(0x30002400);
      FUN_00431850(iVar4 + 0x28,local_28,local_38,local_38,&DAT_005ac548,0);
    }
    Cbin_GetScalar(&DAT_00532af4,s_AMBIENT_LIGHT_0054a668,0,0,&local_50);
    *(int *)(iVar4 + 0xc0) = local_50 >> 1;
    Cbin_GetScalar(&DAT_00532af4,s_LIGHTNING_AMBIENT_LIGHT_0054a650,0,0,&local_50);
    *(int *)(iVar4 + 0x34) = local_50 >> 1;
    iVar5 = Cbin_GetParam(&DAT_00532af4,s_LIGHTNING_LIGHT_SRC_0054a63c,0,0,&param_1,2,1);
    if (iVar5 != 0) {
      local_4c = (longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
      local_44 = (undefined4)local_4c;
      Cbin_GetParam(&DAT_00532af4,s_LIGHTNING_LIGHT_SRC_0054a63c,0,0,&param_1,2,2);
      local_3c = 0;
      local_4c = (longlong)ROUND(param_1 * _DAT_0052e540 * (float)_DAT_0052e538);
      local_40 = (undefined4)local_4c;
      FUN_004b1bb0(local_18,&local_44);
      FUN_004b24d0(puVar1,puVar1);
    }
    Cbin_GetScalar(&DAT_00532af4,s_GAMMA_00535df0,0,0,iVar4 + 0xac);
    Cbin_GetScalar(&DAT_00532af4,s_SATURATION_0054a630,0,0,iVar4 + 0xb0);
    Cbin_GetScalar(&DAT_00532af4,s_LIGHTNING_0054a624,0,0,iVar4 + 0xd8);
    Cbin_GetParam(&DAT_00532af4,&DAT_0053fdec,0,0,iVar4 + 0xb4,1,1);
    Cbin_GetParam(&DAT_00532af4,&DAT_0053fdec,0,0,iVar4 + 0xb8,1,2);
    Cbin_GetParam(&DAT_00532af4,&DAT_0053fdec,0,0,iVar4 + 0xbc,1,3);
    iVar5 = Cbin_GetParam(&DAT_00532af4,s_LIGHT_RGB_0054a618,0,0,(undefined4 *)(iVar4 + 0x138),1,1);
    if (iVar5 == 0) {
      *(undefined4 *)(iVar4 + 0x138) = 0xff;
      *(undefined4 *)(iVar4 + 0x13c) = 0xff;
      *(undefined4 *)(iVar4 + 0x140) = 0xff;
    }
    else {
      Cbin_GetParam(&DAT_00532af4,s_LIGHT_RGB_0054a618,0,0,iVar4 + 0x13c,1,2);
      Cbin_GetParam(&DAT_00532af4,s_LIGHT_RGB_0054a618,0,0,iVar4 + 0x140,1,3);
    }
    Cbin_SelectGroup(s_IMAGES_005355cc);
    Bdf_ParseImageEntry(&DAT_0054a614,iVar4 + 0x44,0x5140000);
    iVar5 = Cbin_CountEntries(s_IMAGES_005355cc,s_IMAGE_005355d4);
    *(int *)(iVar4 + 200) = iVar5;
    if (iVar5 != 0) {
      FUN_0048e3d0((int *)(iVar4 + 0xcc),iVar5 * 100,4,s_BDF_IMAGES_0054a608,DAT_005b9098);
      Cbin_SelectGroup(s_IMAGES_005355cc);
      iVar5 = *(int *)(iVar4 + 0xcc);
      uVar7 = 0;
      if (*(int *)(iVar4 + 200) != 0) {
        do {
          Bdf_ParseImageEntry(s_IMAGE_005355d4,iVar5,0);
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 100;
        } while (uVar7 < *(uint *)(iVar4 + 200));
      }
    }
    Cbin_GetScalar(s_IMAGES_005355cc,s_LENS_FLARE_0054a5fc,0,0,iVar4 + 0xa8);
    iVar5 = Cbin_GetScalar(&PTR_FUN_0054a5f8,s_ENABLED_005347a4,0,0,iVar4 + 0xdc);
    if (iVar5 != 0) {
      piVar2 = (int *)(iVar4 + 0xe0);
      Cbin_GetScalar(&PTR_FUN_0054a5f8,&PTR_DAT_0054a5f4,0,0,piVar2);
      piVar3 = (int *)(iVar4 + 0xe4);
      Cbin_GetScalar(&PTR_FUN_0054a5f8,&PTR_DAT_0054a5f0,0,0,piVar3);
      Cbin_GetParam(&PTR_FUN_0054a5f8,&DAT_0053fdec,0,0,iVar4 + 0xe8,1,1);
      Cbin_GetParam(&PTR_FUN_0054a5f8,&DAT_0053fdec,0,0,iVar4 + 0xec,1,2);
      Cbin_GetParam(&PTR_FUN_0054a5f8,&DAT_0053fdec,0,0,iVar4 + 0xf0,1,3);
      Cbin_GetParam(&PTR_FUN_0054a5f8,s_CLOUD_RGB_0054a5e4,0,0,iVar4 + 0xf4,1,1);
      Cbin_GetParam(&PTR_FUN_0054a5f8,s_CLOUD_RGB_0054a5e4,0,0,iVar4 + 0xf8,1,2);
      Cbin_GetParam(&PTR_FUN_0054a5f8,s_CLOUD_RGB_0054a5e4,0,0,iVar4 + 0xfc,1,3);
      iVar5 = Cbin_GetParam(&PTR_FUN_0054a5f8,s_BACK_RGB_0054a5d8,0,0,(undefined4 *)(iVar4 + 0x100),
                            1,1);
      if (iVar5 == 0) {
        *(undefined4 *)(iVar4 + 0x100) = 0x40;
        *(undefined4 *)(iVar4 + 0x104) = 0x40;
        *(undefined4 *)(iVar4 + 0x108) = 0x40;
      }
      else {
        Cbin_GetParam(&PTR_FUN_0054a5f8,s_BACK_RGB_0054a5d8,0,0,iVar4 + 0x104,1,2);
        Cbin_GetParam(&PTR_FUN_0054a5f8,s_BACK_RGB_0054a5d8,0,0,iVar4 + 0x108,1,3);
      }
      iVar5 = Cbin_GetParam(&PTR_FUN_0054a5f8,s_FRONT_RGB_0054a5cc,0,0,(undefined4 *)(iVar4 + 0x10c)
                            ,1,1);
      if (iVar5 == 0) {
        *(undefined4 *)(iVar4 + 0x10c) = 0x80;
        *(undefined4 *)(iVar4 + 0x110) = 0x80;
        *(undefined4 *)(iVar4 + 0x114) = 0x80;
      }
      else {
        Cbin_GetParam(&PTR_FUN_0054a5f8,s_FRONT_RGB_0054a5cc,0,0,iVar4 + 0x110,1,2);
        Cbin_GetParam(&PTR_FUN_0054a5f8,s_FRONT_RGB_0054a5cc,0,0,iVar4 + 0x114,1,3);
      }
      iVar5 = Cbin_GetParam(&PTR_FUN_0054a5f8,&DAT_0054a5c8,0,0,(undefined4 *)(iVar4 + 0x118),2,1);
      if (iVar5 == 0) {
        *(undefined4 *)(iVar4 + 0x118) = 0x40000000;
        *(undefined4 *)(iVar4 + 0x11c) = 0x10;
        *(undefined4 *)(iVar4 + 0x120) = 0xa0;
      }
      else {
        Cbin_GetParam(&PTR_FUN_0054a5f8,&DAT_0054a5c8,0,0,iVar4 + 0x11c,1,2);
        Cbin_GetParam(&PTR_FUN_0054a5f8,&DAT_0054a5c8,0,0,iVar4 + 0x120,1,3);
      }
      pcVar6 = (char *)(iVar4 + 0x124);
      *piVar2 = *piVar2 << 0xd;
      *piVar3 = *piVar3 << 0xd;
      Cbin_GetParam(&PTR_FUN_0054a5f8,&PTR_DAT_0054a5c4,pcVar6,0x10,0,4,1);
      if (*pcVar6 == '\0') {
        str_sprintf(pcVar6,s_fog1_01_pcx_0054a5b8);
      }
    }
    Cbin_Close();
    FUN_004b1ca0(0);
  }
  return;
}

