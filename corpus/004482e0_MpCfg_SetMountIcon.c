
void MpCfg_SetMountIcon(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0xd4) = param_2;
    if (param_2 != 0) {
      iVar2 = (param_5 - *(int *)(param_2 + 0x166c)) / param_8;
      iVar1 = (param_6 / param_7 - *(int *)(param_2 + 0x1670) / *(int *)(param_2 + 0x1680)) /
              param_9;
    }
    ImageArea_StepFrame(&g_UiManager,param_1,iVar2 + param_3,iVar1 + param_4);
    ImageArea_ClearFlags(&g_UiManager,param_1,0x20000);
  }
  return;
}

