
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

int EntDebug_DrawInfo(int param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined4 uStack_108;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  Gfx_Lock();
  uVar7 = (uint)*(byte *)(*DAT_005b2770 + 4);
  Ui_DrawBox(DAT_005b276c,0x14,0x14,300,0x118,0x80,DAT_005b2770,param_4,0xffff00,80000,2);
  Ent_GetDescName50(param_1,local_80);
  str_sprintf(local_100,s_NAME___s_0054a37c,local_80);
  Text_DrawAligned(local_100,DAT_005b2770,0x1c,0x2c,0xffffff,0xffff,0x10000,2);
  iVar8 = uVar7 + 0x2c;
  str_sprintf(local_100,s_DESC___s_0054a370,*(int *)(param_1 + 0x8c) + 4);
  Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar8,0xffffff,0xffff,0x10000,2);
  if (param_2 != 0) {
    iVar8 = iVar8 + uVar7;
    str_sprintf(local_100,s_SPED_ID___d__DCB__x__0054a358,*(undefined4 *)(param_2 + 0x20),param_1);
    Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar8,0xffffff,0xffff,0x10000,2);
  }
  uVar2 = (**(code **)(g_ActiveRules + 0x1c))(param_1,1);
  uVar3 = Hud_TeamColor(uVar2);
  uVar4 = Race_GetName();
  str_sprintf(local_100,s_RACE___s_0054a34c,uVar4);
  Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar8 + uVar7,uVar3,0xffff,0x10000,2);
  iVar9 = iVar8 + uVar7 + uVar7;
  str_sprintf(local_100,s_Pos____2f____2f____2f_0054a334,
              (double)((float)*(int *)(param_1 + 0x34) * _DAT_0052e5d8),
              (double)((float)*(int *)(param_1 + 0x38) * _DAT_0052e5d8),
              (double)((float)*(int *)(param_1 + 0x3c) * _DAT_0052e5d8));
  Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar9,0x80ffff,0xffff,0x10000,2);
  iVar8 = *(int *)(param_1 + 0x90);
  iVar9 = iVar9 + uVar7;
  if (iVar8 == 0) {
    str_sprintf(local_80);
    uStack_108 = 0x808080;
  }
  else {
    Ent_GetDescName50(iVar8);
    uStack_108 = 0xff2020;
  }
  str_sprintf(local_100,s_TARGET___s___x__0054a324,local_80);
  Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar9,uStack_108,0xffff,0x10000,2);
  if (iVar8 != 0) {
    pcVar1 = *(code **)(*(int *)(iVar8 + 0x8c) + 0x60);
    if (pcVar1 == (code *)0x0) {
      iVar8 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar8 + 0x34));
    }
    else {
      iVar8 = (*pcVar1)(iVar8,param_1);
    }
    str_sprintf(local_100,s_DIST_TO_TARGET___2_2f_0054a30c,(double)((float)iVar8 * _DAT_0052e824));
    iVar9 = iVar9 + uVar7;
    Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar9,uStack_108,0xffff,0x10000,2);
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x24) & 0x80) != 0) {
      iVar9 = iVar9 + uVar7;
      puVar5 = (undefined *)Rtxt_GetText(DAT_005a6144,*(undefined4 *)(param_2 + 0x60));
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_00547904;
        uVar3 = 0x808080;
      }
      else {
        uVar3 = 0xffff00;
      }
      str_sprintf(local_100,s_CONTENTS___s___d__00533ff0,puVar5,*(undefined1 *)(param_3 + 0x1a));
      Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar9,uVar3,0xffff,0x10000,2);
    }
    iVar8 = Sped_GetActorRecord(param_2,*(undefined4 *)(param_1 + 100));
    if (iVar8 != 0) {
      puVar10 = local_100;
      uVar11 = CONCAT44(iVar8,s_ACTOR_NAME___s_0054a2fc);
      iVar9 = iVar9 + uVar7;
      str_sprintf();
      Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar9,0xffff,0xffff,0x10000,2,puVar10,uVar11);
    }
    puVar6 = (undefined4 *)Sped_GetAliasStateFor(param_1,param_2);
    if (puVar6 != (undefined4 *)0x0) {
      iVar9 = iVar9 + uVar7;
      str_sprintf(local_100,s_ALIAS___s__ALIVE__d__0054a2e4,*puVar6,puVar6[1] == 0);
      Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar9,0xffff,0xffff,0x10000,2);
    }
  }
  return iVar9;
}

