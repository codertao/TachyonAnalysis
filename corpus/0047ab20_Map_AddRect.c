
/* sweep: "Map Rect" */

void Map_AddRect(char *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                undefined4 param_7)

{
  char *local_4;
  
  Mem_AllocZeroTagged(&local_4,0x44,4,s_Map_Rect_005525ec,0xa105);
  if (local_4 != (char *)0x0) {
    if (param_1 != (char *)0x0) {
      _strncpy(local_4,param_1,0x1f);
    }
    *(int *)(local_4 + 0x20) = param_2;
    *(int *)(local_4 + 0x24) = param_3;
    *(int *)(local_4 + 0x28) = param_4;
    *(int *)(local_4 + 0x2c) = param_5;
    *(int *)(local_4 + 0x30) = (param_4 - param_2) / 2 + param_2;
    *(int *)(local_4 + 0x34) = (param_5 - param_3) / 2 + param_3;
    *(undefined4 *)(local_4 + 0x38) = param_6;
    *(undefined4 *)(local_4 + 0x3c) = param_7;
    *(char **)(local_4 + 0x40) = DAT_00563678;
    DAT_00563678 = local_4;
  }
  return;
}

