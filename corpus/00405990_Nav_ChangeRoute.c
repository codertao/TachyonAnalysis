
/* CHANGE_WP: route = arg>>16, point = arg&0xffff ('OBJ %d CHANGE WAY') */

void Nav_ChangeRoute(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 local_40 [64];
  
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_OBJ___d__CHANGE_WAY__d__d_005326c4,
                *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20),param_3 >> 0x10,param_3 & 0xffff);
    FUN_0045d9d0(local_40,0);
  }
  uVar1 = FUN_004058f0(param_3 >> 0x10,*(undefined4 *)(param_1 + 0xd8),
                       *(undefined4 *)(param_1 + 100));
  Sector_GetSpedRecord
            (param_1,*(undefined4 *)(param_1 + 0xd8),param_2,*(undefined4 *)(param_1 + 100),uVar1,
             param_3 & 0xffff);
  return;
}

