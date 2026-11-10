
/* nearest MAIN_TARGET_CLASS in range+cone wins, else nearest TARGET_CLASS; skips targets at
   attacker cap */

int Ent_FindTarget(uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  puVar4 = param_2;
  uVar3 = param_1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  local_c = 0;
  local_10 = 0;
  local_14 = param_2[3];
  FUN_0048b390(param_1 + 0x4c,param_2 + 8);
  iVar8 = *(int *)(*(int *)(param_1 + 100) + 8);
  param_2 = (uint *)local_14;
  if (iVar8 != 0) {
    do {
      if ((((*puVar4 & *(uint *)((uint)*(byte *)(iVar8 + 0xc2) * 0x10 + DAT_0058f2e8)) != 0) &&
          ((*(uint *)(iVar8 + 0xd0) & (uVar2 | uVar1)) != 0)) &&
         (((puVar4[7] & 1) != 0 || (*(short *)(iVar8 + 200) < *(short *)(iVar8 + 0xca))))) {
        uVar5 = distance_between((vec3 *)(uVar3 + 0x34),(vec3 *)(iVar8 + 0x34));
        if ((puVar4[1] & *(uint *)(iVar8 + 0xd0)) == 0) {
          if ((uVar5 < local_14) && (iVar6 = Ai_InScanCone(uVar3,iVar8,uVar5,puVar4), iVar6 != 0)) {
            if ((code *)puVar4[6] == (code *)0x0) {
              local_8 = 1;
              local_14 = uVar5;
              local_c = iVar8;
            }
            else {
              uVar7 = (*(code *)puVar4[6])(uVar3,iVar8);
              if ((uVar7 & 1) != 0) {
                local_14 = uVar5;
                local_c = iVar8;
                local_8 = uVar7;
              }
            }
          }
        }
        else if ((uVar5 < param_2) && (iVar6 = Ai_InScanCone(uVar3,iVar8,uVar5,puVar4), iVar6 != 0))
        {
          if ((code *)puVar4[6] == (code *)0x0) {
            param_1 = 1;
            param_2 = (uint *)uVar5;
            local_10 = iVar8;
          }
          else {
            uVar7 = (*(code *)puVar4[6])(uVar3,iVar8);
            if ((uVar7 & 1) != 0) {
              param_1 = uVar7;
              param_2 = (uint *)uVar5;
              local_10 = iVar8;
            }
          }
        }
      }
      iVar8 = *(int *)(iVar8 + 0x94);
    } while (iVar8 != 0);
    if (local_10 != 0) {
      if (param_3 != (uint *)0x0) {
        *param_3 = param_1;
      }
      return local_10;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_8;
  }
  return local_c;
}

