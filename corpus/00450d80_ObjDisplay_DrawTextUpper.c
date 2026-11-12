
/* sweep */

void ObjDisplay_DrawTextUpper(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_80 [128];
  
  iVar1 = Rtxt_GetText(DAT_005a6140,param_1);
  if (iVar1 != 0) {
    str_sprintf(local_80,iVar1,param_2);
    __strupr(local_80);
    Text_DrawAligned(local_80,DAT_0058f420,*param_3,param_3[1],param_3[2],0xffff,0x10000,0);
  }
  return;
}

