
void FUN_00460000(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  iVar1 = DAT_0058b064;
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_DETECTED_PLAYER_DOCKED___DOCK_TA_00549450,*param_1);
    FUN_0045d9d0(local_40,0);
  }
  iVar2 = FUN_0045d680(*param_1,*(undefined4 *)(DAT_0058b064 + 100));
  if (iVar2 == 0) {
    if (DAT_005a6730 != 0) {
      str_sprintf(local_40,s_DOCKED_OBJ__d_NOT_FOUND___trigge_00549400,*param_1);
      FUN_0045d9d0(local_40,0);
    }
  }
  else {
    iVar3 = FUN_00405d60(iVar2);
    if (iVar3 != 0) {
      local_44 = *(undefined4 *)(iVar3 + 0x20);
      local_58 = 0;
      local_54 = 0;
      local_50 = 4;
      local_4c = 0;
      local_48 = 1;
      Mission_PostEvent(&local_58,*(undefined4 *)(DAT_0058b064 + 100));
      if (DAT_005a6730 != 0) {
        str_sprintf(local_40,s_DOCK_FOUND___DOCK_SPED_ID____d_00549430,*(undefined4 *)(iVar3 + 0x20)
                   );
        FUN_0045d9d0(local_40,0);
      }
      *(int *)(iVar1 + 0x110) = iVar2;
      *(undefined4 *)(iVar1 + 0x114) = 0;
      return;
    }
  }
  return;
}

