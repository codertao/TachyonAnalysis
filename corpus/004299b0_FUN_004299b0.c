
void FUN_004299b0(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int *param_7,int param_8,int param_9)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  if (*param_7 != 0) {
    lVar2 = (longlong)(int)(param_3 >> 2) * (longlong)param_6;
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    FUN_00452180(1);
    if (uVar3 < 8) {
      uVar3 = 8;
    }
    else if (0x20 < uVar3) {
      uVar3 = 0x20;
    }
    if ((param_8 != 0) && (0x80 < param_3)) {
      param_3 = 0x80;
    }
    uVar4 = (uint)((longlong)(int)param_3 * (longlong)param_9) >> 0x10 |
            (int)((ulonglong)((longlong)(int)param_3 * (longlong)param_9) >> 0x20) << 0x10;
    lVar2 = (longlong)(int)(uVar3 >> 1) * (longlong)param_9;
    uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    uVar3 = (uint)((longlong)(int)uVar3 * (longlong)param_9) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar3 * (longlong)param_9) >> 0x20) << 0x10;
    iVar1 = *param_7;
    uVar6 = FUN_004299a0(param_5);
    *(undefined4 *)(iVar1 + 4) = uVar6;
    param_2 = param_2 - uVar5;
    param_1 = param_1 - uVar5;
    iVar7 = param_2 - uVar4;
    iVar8 = param_1 - uVar4;
    FUN_00428300(iVar1,iVar8,iVar7,4,0xffffffff,param_7[3],param_7[4],uVar3,uVar3,param_7[5],
                 param_7[6]);
    iVar1 = *param_7;
    uVar6 = FUN_004299a0(param_5);
    param_1 = param_1 + uVar4;
    *(undefined4 *)(iVar1 + 4) = uVar6;
    FUN_00428300(iVar1,param_1,iVar7,4,0xffffffff,param_7[5] + param_7[3],param_7[4],uVar3,uVar3,
                 -param_7[5],param_7[6]);
    iVar1 = *param_7;
    uVar6 = FUN_004299a0(param_5);
    *(undefined4 *)(iVar1 + 4) = uVar6;
    param_2 = uVar4 + param_2;
    FUN_00428300(iVar1,param_1,param_2,4,0xffffffff,param_7[5] + param_7[3],param_7[6] + param_7[4],
                 uVar3,uVar3,-param_7[5],-param_7[6]);
    iVar1 = *param_7;
    uVar6 = FUN_004299a0(param_5);
    *(undefined4 *)(iVar1 + 4) = uVar6;
    FUN_00428300(iVar1,iVar8,param_2,4,0xffffffff,param_7[3],param_7[6] + param_7[4],uVar3,uVar3,
                 param_7[5],-param_7[6]);
  }
  return;
}

