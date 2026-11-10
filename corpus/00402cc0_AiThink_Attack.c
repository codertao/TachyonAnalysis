
/* dogfight: lead aim with skill jitter, missile/gun windows, throttle match, anti head-on, patience
   -> Ai_BreakOff */

void AiThink_Attack(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  if (((DAT_005897e4 ^ *(uint *)(param_1 + 800)) & 0xf) != 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x90);
  if (iVar7 == 0) {
    Ai_ReacquireTarget(param_1);
    return;
  }
  pcVar1 = *(code **)(*(int *)(iVar7 + 0x8c) + 0x60);
  if (pcVar1 == (code *)0x0) {
    iVar3 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(iVar7 + 0x34));
  }
  else {
    iVar3 = (*pcVar1)(iVar7,param_1);
  }
  if (0x9c40000 < iVar3) {
    *(code **)(param_1 + 0x304) = AiThink_Approach;
    return;
  }
  pcVar1 = *(code **)(*(int *)(iVar7 + 0x8c) + 0x40);
  if (((pcVar1 != (code *)0x0) && (iVar4 = (*pcVar1)(iVar7), iVar4 != 0)) &&
     (*(char *)(iVar4 + 0x1b) == '\x01')) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x312) = 0x400;
  *(undefined1 *)(param_1 + 0x327) = 0;
  iVar4 = *(int *)(param_1 + 0x13c + *(int *)(param_1 + 0x318) * 0x38);
  if (iVar4 == 0) {
    Ai_ReturnToDefault(param_1);
    return;
  }
  if (*(int *)(iVar4 + 0x54) < 0x7fa7) {
    iVar8 = 0;
  }
  else {
    iVar8 = iVar3 / *(int *)(iVar4 + 0x54) + 0x10;
  }
  uVar6 = *(uint *)(&g_AiSkillLeadJitter + (uint)*(ushort *)(param_1 + 0x310) * 4);
  uVar5 = global_bad_shift_rng();
  iVar8 = iVar8 + ((uVar5 & uVar6) - (uVar6 >> 1));
  iStack_40 = *(int *)(iVar7 + 0xa0) * iVar8 + *(int *)(iVar7 + 0x34);
  iStack_3c = *(int *)(iVar7 + 0xa4) * iVar8 + *(int *)(iVar7 + 0x38);
  iStack_38 = *(int *)(iVar7 + 0xa8) * iVar8 + *(int *)(iVar7 + 0x3c);
  FUN_0040f380(param_1 + 0x34,&iStack_40,&iStack_4c);
  FUN_0040f460(iVar7,&iStack_4c);
  *(int *)(param_1 + 0xdc) = iStack_4c;
  *(undefined4 *)(param_1 + 0xe0) = uStack_48;
  *(undefined4 *)(param_1 + 0xe4) = uStack_44;
  iStack_34 = *(int *)(param_1 + 0xdc) * 0x80 + *(int *)(param_1 + 0x4c) * -0x80 >> 7;
  iStack_30 = *(int *)(param_1 + 0xe0) * 0x80 + *(int *)(param_1 + 0x50) * -0x80 >> 7;
  uStack_2c = 0;
  uVar6 = call_approx_vec_length(&iStack_34);
  uStack_24 = *(undefined4 *)(iVar7 + 0xd0);
  iStack_c = param_1 + 0x13c;
  iVar8 = param_1 + 0x10c;
  uStack_18 = (byte)~*(byte *)(iVar7 + 0xc0) >> 6 & 1;
  uStack_10 = *(undefined4 *)(param_1 + 0x8c);
  uStack_4 = 0xffffffff;
  uStack_14 = (uint)*(byte *)(param_1 + 0x324);
  iStack_20 = iVar3;
  uStack_1c = uVar6;
  iStack_8 = iVar8;
  if (((DAT_005897e4 ^ *(uint *)(param_1 + 800)) & 0x3f) == 0) {
    if (((uVar6 < 0x280000) && ((iVar3 < 0x7530000 && (0x3e80000 < iVar3)))) &&
       (*(short *)(iVar7 + 0xcc) < *(short *)(iVar7 + 0xce))) {
      uStack_28 = 6;
      iVar4 = FUN_004930c0(&uStack_28);
      if (iVar4 != -1) {
        *(int *)(param_1 + 0x318) = iVar4;
        *(undefined1 *)(param_1 + 0x326) = 1;
        goto LAB_00402fd0;
      }
    }
    if (param_1 == DAT_005b39f0) {
      uVar6 = uVar6 - 1;
    }
    if ((uVar6 < 0xa0000) && (iVar3 < 0x36b0000)) {
      uStack_28 = 0x31;
      iVar4 = FUN_004930c0(&uStack_28);
      if (iVar4 == -1) {
        *(undefined1 *)(param_1 + 0x326) = 0;
      }
      else {
        *(int *)(param_1 + 0x318) = iVar4;
        *(undefined1 *)(param_1 + 0x326) = 1;
      }
      goto LAB_00402fd0;
    }
  }
  else if ((uVar6 <= *(uint *)(iVar4 + 0xc)) && (iVar3 <= *(int *)(iVar4 + 0x60)))
  goto LAB_00402fd0;
  *(undefined1 *)(param_1 + 0x326) = 0;
LAB_00402fd0:
  if ((*(byte *)(iVar7 + 0xd0) & 3) != 0) {
    if (iVar3 < 0x2710000) {
      uVar2 = FlightModel_SolveThrottle
                        (*(int *)(param_1 + 0x8c) + 0x84,*(undefined4 *)(iVar7 + 0xd4),iVar8,
                         *(uint *)(*(int *)(param_1 + 0x8c) + 0x564) & 0x400,1);
      *(undefined2 *)(param_1 + 0x312) = uVar2;
    }
    if (((iVar3 < 0xfa0000) && (*(short *)(iVar7 + 0x76) == 1)) &&
       (iVar3 = Ai_IsBehind(param_1,iVar7,0), iVar3 == 0)) {
      iVar7 = Ai_IsBehind(iVar7,param_1,0);
      if (iVar7 != 0) {
        return;
      }
      Ai_AvoidCollision(param_1);
      return;
    }
  }
  if (uVar6 < 0x140001) {
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + -1;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x328) + 1;
    *(int *)(param_1 + 0x328) = iVar7;
    if (*(int *)(&g_AiSkillPatience + (uint)*(ushort *)(param_1 + 0x310) * 4) < iVar7) {
      *(code **)(param_1 + 0x308) = AiThink_Attack;
      Ai_BreakOff(param_1,10);
      *(undefined4 *)(param_1 + 0x328) = 0;
    }
  }
  if (*(int *)(param_1 + 0x328) < 0) {
    *(undefined4 *)(param_1 + 0x328) = 0;
  }
  return;
}

