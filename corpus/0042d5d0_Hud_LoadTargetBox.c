
/* HUD layout TARGET_BOX: BORDER/POINTER/SCREEN, text slots (SHIELDS, RANGE +0x6f4, TOP_NAME,
   GROUP_INFO, CONTENTS) */

void Hud_LoadTargetBox(int param_1)

{
  longlong lVar1;
  
  Cbin_SelectGroup(s_TARGET_BOX_005369fc);
  FUN_0042d010(param_1 + 0x5fc,s_BORDER_005369f4,param_1);
  Cbin_SelectGroup(s_TARGET_BOX_005369fc);
  FUN_0042d010(param_1 + 0x654,&DAT_005369ec,param_1);
  Cbin_SelectGroup(s_TARGET_BOX_005369fc);
  FUN_0042d010(param_1 + 0x628,s_POINTER_005369e4,param_1);
  Cbin_GetParam(s_TARGET_BOX_005369fc,s_SCREEN_005369dc,0,0,(int *)(param_1 + 0x6ac),1,1);
  Cbin_GetParam(s_TARGET_BOX_005369fc,s_SCREEN_005369dc,0,0,(int *)(param_1 + 0x6b0),1,2);
  Cbin_GetParam(s_TARGET_BOX_005369fc,s_SCREEN_005369dc,0,0,param_1 + 0x79c,1,3);
  Cbin_GetParam(s_TARGET_BOX_005369fc,s_SCREEN_005369dc,0,0,param_1 + 0x7a0,1,4);
  *(int *)(param_1 + 0x6b4) = *(int *)(param_1 + 0x6ac) + -1 + *(int *)(param_1 + 0x79c);
  *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x7a0) + -1 + *(int *)(param_1 + 0x6b0);
  lVar1 = (longlong)*(int *)(param_1 + 0x79c) * (longlong)DAT_005a67e4;
  FUN_00451e80(DAT_005a67a8,DAT_005a67ac,4,
               (int)(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) * 0x177) /
               0x140,&DAT_005b0148);
  FUN_0042cd70(s_TARGET_BOX_005369fc,&DAT_005334f4,param_1 + 0x6bc,param_1);
  FUN_0042cd70(s_TARGET_BOX_005369fc,s_SHIELDS_005369a8,param_1 + 0x6d8,param_1);
  FUN_0042cd70(s_TARGET_BOX_005369fc,s_RANGE_00532ab8,param_1 + 0x6f4,param_1);
  FUN_0042cd70(s_TARGET_BOX_005369fc,&DAT_00532c70,param_1 + 0x710,param_1);
  FUN_0042cd70(s_TARGET_BOX_005369fc,s_TOP_NAME_005369d0,param_1 + 0x72c,param_1);
  FUN_0042cd70(s_TARGET_BOX_005369fc,s_GROUP_INFO_005369c4,param_1 + 0x748,param_1);
  FUN_0042cd70(s_TARGET_BOX_005369fc,s_CONTENTS_005369b8,param_1 + 0x764,param_1);
  FUN_0042cd70(s_TARGET_BOX_005369fc,&DAT_005369b0,param_1 + 0x780,param_1);
  return;
}

