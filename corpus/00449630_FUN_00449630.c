
void FUN_00449630(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_74;
  int local_70;
  undefined1 local_6c [108];
  
  iVar1 = FUN_0043bc10(&g_UiManager,s_MountLine_00547898);
  uVar2 = Ship_GetCurrentModel();
  iVar3 = Cbin_LoadFile(uVar2,local_6c);
  if (iVar3 != 0) {
    if (iVar1 != 0) {
      FUN_004abcc0(0x1f,*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                   *(undefined4 *)(iVar1 + 0x48));
    }
    FUN_0046e980();
    piVar4 = &DAT_00593a90;
    do {
      Cbin_FindSection(piVar4 + -0x2ac,local_6c);
      iVar1 = Cbin_FindParam(s_SEGMENT_POINT_00547888,0,0,&local_74,1,1,local_6c);
      while (iVar1 != 0) {
        Cbin_GetParamN_Ctx(s_SEGMENT_POINT_00547888,0,0,&local_70,1,2,local_6c);
        iVar1 = (*piVar4 - piVar4[-2]) / 2 + piVar4[-2];
        FUN_0046eda0(piVar4[-3],iVar1,local_74 + -0x14,iVar1,local_74 + -0x14,local_70 + 0x19,0x1f);
        iVar1 = Cbin_FindParam(s_SEGMENT_POINT_00547888,0,0,&local_74,1,1,local_6c);
      }
      piVar4 = piVar4 + 0x2ad;
    } while ((int)piVar4 < 0x599030);
    FUN_0049adb0(local_6c);
  }
  return;
}

