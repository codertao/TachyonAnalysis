
void FUN_00429dd0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int aiStack_40 [2];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  iVar2 = DAT_005b3300;
  uVar4 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x8c) != 0)) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x78);
    if (pcVar1 != (code *)0x0) {
      iVar3 = (*pcVar1)(param_1,0xb,0);
      if (iVar3 != 0) {
        FUN_004b1bb0(local_18,param_1 + 0x4c);
        FUN_004b24d0(iVar3,&local_24);
      }
      uVar4 = (*pcVar1)(param_1,0x10,0);
    }
    FUN_004b1be0(local_18,iVar2 + 0x4c);
    iStack_30 = (*(int *)(param_1 + 0x34) - *(int *)(iVar2 + 0x34)) + local_24;
    iStack_2c = (*(int *)(param_1 + 0x38) - *(int *)(iVar2 + 0x38)) + local_20;
    iStack_28 = (*(int *)(param_1 + 0x3c) - *(int *)(iVar2 + 0x3c)) + local_1c;
    FUN_004b2410(&iStack_30,&iStack_30);
    FUN_004b2e00(&iStack_30,&iStack_38);
    iStack_30 = FUN_00429da0(param_1);
    FUN_004b2e00(&iStack_30,aiStack_40);
    aiStack_40[0] = aiStack_40[0] - DAT_00604474 >> 7;
    if (-1 < iStack_28) {
      if (aiStack_40[0] < 0x10) {
        aiStack_40[0] = 0x10;
      }
      (*(code *)(&PTR_FUN_005365b8)[param_5])
                (iStack_38 >> 7,iStack_34 >> 7,aiStack_40[0] + param_3,param_1,param_2,param_4,uVar4
                 ,0x10000);
    }
  }
  return;
}

