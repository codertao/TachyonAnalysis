
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004854e0(void)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int local_c8;
  undefined4 *local_c4;
  char *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  longlong local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [20];
  int local_74;
  undefined1 local_6c [108];
  
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_c8 = 0x20;
  if (DAT_0056e38c != 0) {
    DAT_0056e3a8 = (undefined4 *)0x0;
    local_ac = load_rtxt_bin(s_shiptext_bin_00545c20,0xa103);
    FUN_004b1c80(0xa103,0xa103);
    iVar9 = 1;
    local_b0 = 0;
    local_c0 = &DAT_005835a0;
    local_c4 = &DAT_005835c0;
    puVar10 = &DAT_00587a7c;
    do {
      if ((*local_c0 == '\0') || (local_c8 == 0)) break;
      puVar7 = (undefined4 *)(puVar10 + -0x18);
      *puVar7 = 0;
      iVar4 = FUN_004851c0(local_c0);
      *(int *)(puVar10 + 0xb8) = iVar4;
      if (iVar4 != 0) {
        uVar5 = Spx_ResolveDesName(local_c0);
        str_sprintf(puVar10,&DAT_00536768,uVar5);
        iVar4 = Cbin_LoadFile(puVar10,local_6c);
        if (iVar4 != 0) {
          *(undefined4 *)(puVar10 + 0x30) = *local_c4;
          str_sprintf(puVar10 + 0x10,local_c0);
          puVar11 = DAT_0056e3a8;
          *(int *)(puVar10 + -0x14) = iVar9;
          local_a4 = iVar9 + 1;
          *puVar7 = 1;
          if (puVar11 == (undefined4 *)0x0) {
            DAT_0056e3a4 = *(undefined4 *)(puVar10 + -0x14);
            DAT_0056e3a8 = puVar7;
          }
          Cbin_FindSection(&DAT_00532af4,local_6c);
          iVar9 = Cbin_GetParamN_Ctx(s_SLIP_SCALE_00557af8,0,0,puVar10 + 0xb4,2,1,local_6c);
          if (iVar9 == 0) {
            *(undefined4 *)(puVar10 + 0xb4) = 0x3f800000;
          }
          Cbin_FindSection(&DAT_00532af4,local_6c);
          Cbin_FindParam(s_EXTERIOR_PAK_00532ae4,local_88,0xf,0,4,1,local_6c);
          Cbin_GetParamN_Ctx(s_EXTERIOR_PAK_00532ae4,local_98,0xf,0,4,2,local_6c);
          iVar9 = Cbin_GetParam_Ctx(s_PARTS_0054a010,s_PILOT_HEAD_00557aec,0,0,puVar10 + -0x10,1,1,
                                    local_6c);
          if (iVar9 == 0) {
            *(undefined4 *)(puVar10 + -0x10) = 0xffffffff;
          }
          puVar11 = (undefined4 *)(puVar10 + 0x100);
          for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          uVar5 = Pak_Load(local_88,s_shipyard_shippak_00557890,local_98);
          *(undefined4 *)(puVar10 + 0xfc) = uVar5;
          *(undefined1 **)(puVar10 + 0x144) = &LAB_004854b0;
          *(undefined4 **)(puVar10 + 0x148) = puVar7;
          Cbin_FindSection(&DAT_00532af4,local_6c);
          Cbin_FindParam(s_SHADOW_PAK_00557ae0,local_88,0xf,0,4,1,local_6c);
          Cbin_GetParamN_Ctx(s_SHADOW_PAK_00557ae0,local_98,0xf,0,4,2,local_6c);
          piVar1 = (int *)(puVar10 + 0x150);
          piVar8 = piVar1;
          for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar8 = 0;
            piVar8 = piVar8 + 1;
          }
          FUN_004b1ca0(0x20000000);
          uVar5 = Pak_Load(local_88,s_shipyard_shipshdw_00557acc,local_98);
          *(undefined4 *)(puVar10 + 0x14c) = uVar5;
          FUN_004b1ca0(0);
          local_a8 = -1;
          Cbin_GetParam_Ctx(s_CONNECT_0054a20c,s_LAND_POINT_0054a214,0,0,&local_a8,1,1,local_6c);
          pcVar6 = (char *)FUN_0048e820(local_ac,s_OTHER_SHIP_NAMES_00533a5c,puVar10 + 0x10);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = s__Ship_Desc_0055790c;
          }
          str_sprintf(puVar10 + 0x34,pcVar6);
          FUN_0049adb0(local_6c);
          puVar7 = (undefined4 *)Pak_GetAttachPoint(DAT_0056e38c,*(undefined4 *)(puVar10 + -0x14));
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined4 *)(puVar10 + -0xc) = *puVar7;
            *(undefined4 *)(puVar10 + -8) = puVar7[1];
            *(undefined4 *)(puVar10 + -4) = puVar7[2];
          }
          if (local_a8 == -1) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)Pak_GetAttachPoint(*(undefined4 *)(puVar10 + 0xfc),local_a8);
          }
          piVar2 = (int *)(puVar10 + 0x11c);
          *piVar2 = *(int *)(puVar10 + -0xc) + DAT_0056e35c;
          *(int *)(puVar10 + 0x120) = *(int *)(puVar10 + -8) + DAT_0056e360;
          local_b4 = DAT_0056e364;
          *(int *)(puVar10 + 0x124) = *(int *)(puVar10 + -4) + DAT_0056e364;
          if (piVar8 != (int *)0x0) {
            *piVar2 = *piVar2 + *piVar8;
            *(int *)(puVar10 + 0x120) = *(int *)(puVar10 + 0x120) - piVar8[1];
            *(int *)(puVar10 + 0x124) = *(int *)(puVar10 + 0x124) + piVar8[2];
          }
          fVar3 = *(float *)(puVar10 + 0xb4) * _DAT_0052e544;
          *(undefined4 *)(puVar10 + 300) = *(undefined4 *)(puVar10 + 0x120);
          *(int *)(puVar10 + 0x128) = *piVar2;
          local_a0 = (longlong)ROUND(fVar3);
          *(undefined4 *)(puVar10 + 0x140) = *(undefined4 *)(puVar10 + 0xfc);
          local_bc = DAT_0056e35c;
          *(undefined4 *)(puVar10 + 0x130) = *(undefined4 *)(puVar10 + 0x124);
          iVar9 = DAT_0056e38c;
          *(undefined4 *)(puVar10 + 0x104) = (undefined4)local_a0;
          local_b8 = DAT_0056e360;
          *(undefined4 *)(puVar10 + 0x100) = 0x90;
          *(undefined4 *)(puVar10 + 0x114) = 0;
          piVar8 = (int *)Pak_GetAttachPoint(iVar9,0);
          if (piVar8 != (int *)0x0) {
            local_bc = local_bc + *piVar8;
            local_b8 = local_b8 + piVar8[1];
            local_b4 = local_b4 + piVar8[2];
          }
          piVar8 = (int *)(puVar10 + 0x134);
          Vec_DirAngles(piVar2,&local_bc,piVar8);
          local_a0 = (longlong)ROUND(*(float *)(puVar10 + 0xb4) * _DAT_0052e544);
          local_74 = DAT_0056e360 + -0x10000;
          *(int *)(puVar10 + 0x16c) = *piVar2;
          *(int *)(puVar10 + 0x170) = local_74;
          *(undefined4 *)(puVar10 + 0x174) = *(undefined4 *)(puVar10 + 0x124);
          *(undefined4 *)(puVar10 + 0x17c) = *(undefined4 *)(puVar10 + 0x170);
          *piVar1 = *piVar1 + 0x90;
          *(int *)(puVar10 + 0x178) = *(int *)(puVar10 + 0x16c);
          *(undefined4 *)(puVar10 + 0x154) = (undefined4)local_a0;
          *(undefined4 *)(puVar10 + 0x180) = *(undefined4 *)(puVar10 + 0x174);
          *(undefined4 *)(puVar10 + 400) = *(undefined4 *)(puVar10 + 0x14c);
          *(int *)(puVar10 + 0x184) = *piVar8;
          *(undefined4 *)(puVar10 + 0x188) = *(undefined4 *)(puVar10 + 0x138);
          *(int *)(puVar10 + 0xd4) = *piVar8 + -0x1000;
          *(undefined4 *)(puVar10 + 0x18c) = *(undefined4 *)(puVar10 + 0x13c);
          *(int *)(puVar10 + 0xd8) = *(int *)(puVar10 + 0x138) + -0x1000;
          *(int *)(puVar10 + 0xcc) = *(int *)(puVar10 + 0x138) + 0x1000;
          iVar9 = *piVar8 + 0x1000;
          *(int *)(puVar10 + 0xd0) = *(int *)(puVar10 + 0x13c) + 0x1000;
          *(int *)(puVar10 + 200) = iVar9;
          *(int *)(puVar10 + 0xe0) = iVar9;
          *(int *)(puVar10 + 0xdc) = *(int *)(puVar10 + 0x13c) + -0x1000;
          *(undefined4 *)(puVar10 + 0xe4) = *(undefined4 *)(puVar10 + 0xcc);
          *(undefined4 *)(puVar10 + 0xe8) = *(undefined4 *)(puVar10 + 0xd0);
          iVar9 = *(int *)(puVar10 + 0x120) + 0x1000;
          *(int *)(puVar10 + 0xf0) = *(int *)(puVar10 + 0x120) + -0x1000;
          *(undefined4 *)(puVar10 + 0x164) = 0;
          *(int *)(puVar10 + 0xec) = iVar9;
          *(int *)(puVar10 + 0xf4) = iVar9;
          local_b0 = local_b0 + 1;
          puVar10 = puVar10 + 0x1b4;
          DAT_00563e08 = DAT_00563e08 + 1;
          iVar9 = local_a4;
        }
      }
      local_c4 = local_c4 + 0x1a;
      local_c8 = local_c8 + -1;
      local_c0 = local_c0 + 0x68;
    } while (local_b0 < 5);
    FUN_004853e0();
    OurFreeMem(local_ac);
  }
  return;
}

