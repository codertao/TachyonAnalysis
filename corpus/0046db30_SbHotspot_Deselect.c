
/* sweep */

void SbHotspot_Deselect(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
  SbPak_SetActive(0,0);
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 != 0)) &&
     (param_3 != (undefined4 *)0x0)) {
    set_flag_10c_on_elem_by_id(DAT_005879a0,*param_2 + 0xcc,0x20000);
    *param_3 = 0;
    *param_2 = param_1;
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(*param_2 + 0xa8) = *(undefined4 *)(*param_2 + 0xa4);
    *(undefined4 *)(*param_2 + 0xb4) = *(undefined4 *)(*param_2 + 0xb0);
    *(undefined4 *)(*param_2 + 0xbc) = *(undefined4 *)(*param_2 + 0xb8);
    *(undefined4 *)(*param_2 + 0x84) = *(undefined4 *)(*param_2 + 0x80);
    if (*(int *)(*param_2 + 0xc4) != 0) {
      Teletype_ResetSlot(0);
      Ui_RefreshWindow(DAT_005879a0,param_4,0,0);
    }
    iVar1 = *param_2;
    if (*(int *)(iVar1 + 200) != 0) {
      ImageArea_StepFrame(DAT_005879a0,iVar1 + 0xcc,*(undefined4 *)(iVar1 + 0x118),
                          *(undefined4 *)(iVar1 + 0x11c));
      ImageArea_ClearFlags(DAT_005879a0,*param_2 + 0xcc,0x20000);
    }
  }
  return;
}

