
/* sweep */

void Hud_DrawTargetName(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 local_84;
  char local_80 [128];
  
  if (*(int *)(GLBL_SOME_CONTEXT + 0x110) == 0) {
    pcVar3 = (char *)Ent_GetDisplayName(param_2);
    if (pcVar3 != (char *)0x0) {
      uVar5 = 0xffffffff;
      do {
        pcVar7 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar3 = pcVar7 + -uVar5;
      pcVar7 = local_80;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      __strupr(local_80);
      local_84 = Ent_GetIffColorEx(param_2,1);
      Hud_DrawText(local_80,*(undefined4 *)(param_1 + 0x71c),*(undefined4 *)(param_1 + 0x714),
                   *(undefined4 *)(param_1 + 0x718),local_84,0,*(undefined4 *)(param_1 + 0x724));
    }
  }
  else {
    pcVar3 = (char *)Ent_GetDisplayName(param_2);
    if (pcVar3 != (char *)0x0) {
      uVar5 = 0xffffffff;
      do {
        pcVar7 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar3 = pcVar7 + -uVar5;
      pcVar7 = local_80;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      __strupr(local_80);
      local_84 = Ent_GetIffColorEx(param_2,1);
      Hud_DrawText(local_80,*(undefined4 *)(param_1 + 0x738),*(undefined4 *)(param_1 + 0x730),
                   *(undefined4 *)(param_1 + 0x734),local_84,0,*(undefined4 *)(param_1 + 0x740));
    }
    pcVar3 = (char *)Ent_GetDisplayName(*(undefined4 *)(GLBL_SOME_CONTEXT + 0x110));
    if (pcVar3 != (char *)0x0) {
      uVar5 = 0xffffffff;
      do {
        pcVar7 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar3 = pcVar7 + -uVar5;
      pcVar7 = local_80;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      __strupr(local_80);
      local_84 = Ent_GetIffColorEx(param_2,1);
      Hud_DrawText(local_80,*(undefined4 *)(param_1 + 0x71c),*(undefined4 *)(param_1 + 0x714),
                   *(undefined4 *)(param_1 + 0x718),0xff8000,0,*(undefined4 *)(param_1 + 0x724));
    }
  }
  if (*(int *)(*(int *)(param_2 + 0x8c) + 0x4c) != 0) {
    local_80[0] = '\0';
    (**(code **)(*(int *)(param_2 + 0x8c) + 0x4c))(param_2,3,local_80);
    if (local_80[0] != '\0') {
      __strupr(local_80);
      Hud_DrawText(local_80,*(undefined4 *)(param_1 + 0x754),*(undefined4 *)(param_1 + 0x74c),
                   *(undefined4 *)(param_1 + 0x750),local_84,0,*(undefined4 *)(param_1 + 0x75c));
    }
  }
  pcVar2 = *(code **)(*(int *)(param_2 + 0x8c) + 0x4c);
  if ((pcVar2 != (code *)0x0) && (iVar4 = (*pcVar2)(param_2,2,0), iVar4 != 0)) {
    Hud_DrawText(iVar4,*(undefined4 *)(param_1 + 0x770),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x77c),0,
                 *(undefined4 *)(param_1 + 0x778));
  }
  iVar4 = Ent_GetAffiliation(param_2);
  if (iVar4 != 0) {
    Hud_DrawText(iVar4,*(undefined4 *)(param_1 + 0x78c),*(undefined4 *)(param_1 + 0x784),
                 *(undefined4 *)(param_1 + 0x788),*(undefined4 *)(param_1 + 0x798),0,
                 *(undefined4 *)(param_1 + 0x794));
  }
  return;
}

