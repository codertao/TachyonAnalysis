
/* sweep: guess */

void Ui_StartWindowSlide(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                        int param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = Ui_FindWindowDef(param_1,param_2);
  if (((iVar1 != 0) && (param_6 != 0)) && ((*(uint *)(iVar1 + 0xf0) & 4) == 0)) {
    *(uint *)(iVar1 + 0xf0) = *(uint *)(iVar1 + 0xf0) | 4;
    *(int *)(iVar1 + 0x5c) = param_4;
    *(int *)(iVar1 + 0x60) = param_5;
    *(int *)(iVar1 + 100) = param_6;
    *(undefined4 *)(iVar1 + 0x108) = param_7;
    *(float *)(iVar1 + 0x54) = ((float)param_4 - (float)*(int *)(iVar1 + 0x44)) / (float)param_6;
    *(float *)(iVar1 + 0x58) = ((float)param_5 - (float)*(int *)(iVar1 + 0x48)) / (float)param_6;
    str_sprintf(iVar1 + 0x68,&DAT_00536768,param_3);
  }
  return;
}

