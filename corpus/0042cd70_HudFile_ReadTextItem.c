
/* sweep */

void HudFile_ReadTextItem
               (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_98 [24];
  undefined1 local_80 [128];
  
  Cbin_GetParam(param_1,param_2,local_98,0x18,0,4,1);
  uVar1 = Rtxt_KeyIndex(DAT_005a6140,local_98);
  *param_3 = uVar1;
  Cbin_GetParam(param_1,param_2,0,0,param_3 + 1,1,2);
  Cbin_GetParam(param_1,param_2,0,0,param_3 + 2,1,3);
  Cbin_GetParam(param_1,param_2,local_98,0x18,0,4,4);
  uVar1 = HudFile_FindFont(param_4,local_98);
  param_3[3] = uVar1;
  Cbin_GetParam(param_1,param_2,local_98,0x18,0,4,5);
  iVar2 = HudFile_FindColor(param_4,local_98);
  param_3[4] = iVar2;
  if (iVar2 == 0) {
    param_3[6] = 0xff00ff;
  }
  else {
    param_3[6] = (*(int *)(iVar2 + 0x1c) << 8 | *(uint *)(iVar2 + 0x20)) << 8 |
                 *(uint *)(iVar2 + 0x24);
  }
  Cbin_GetParam(param_1,param_2,local_80,0x80,0,4,6);
  uVar1 = Str_FindAnyToken(local_80,&PTR_s_NORMAL_005364f8);
  param_3[5] = uVar1;
  return;
}

