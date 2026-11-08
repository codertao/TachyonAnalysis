
void FUN_00460220(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  iVar1 = DAT_0058b064;
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_DETECTED_PLAYER_UNDOCKING___DOCK_005494a4,*param_1);
    FUN_0045d9d0(local_40,0);
  }
  iVar2 = FUN_0045d680(*param_1,*(undefined4 *)(DAT_0058b064 + 100));
  if (iVar2 != 0) {
    iVar2 = FUN_00405d60(iVar2);
    if (iVar2 != 0) {
      local_44 = *(undefined4 *)(iVar2 + 0x20);
      local_58 = 0;
      local_54 = 0;
      local_50 = 5;
      local_4c = 0;
      local_48 = 1;
      Mission_PostEvent(&local_58,*(undefined4 *)(DAT_0058b064 + 100));
      if (DAT_005a6730 != 0) {
        str_sprintf(local_40,s_DOCK_FOUND___UNDOCKING_WITH_SPED_00549478,
                    *(undefined4 *)(iVar2 + 0x20));
        FUN_0045d9d0(local_40,0);
      }
    }
  }
  *(undefined4 *)(iVar1 + 0x114) = 0;
  *(undefined4 *)(iVar1 + 0x110) = 0;
  return;
}

