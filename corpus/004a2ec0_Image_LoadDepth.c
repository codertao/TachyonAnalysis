
/* sweep: "PCX Image" */

int Image_LoadDepth(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_0060315c = param_2;
  iVar1 = Image_ReadHeader(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = mem_GetMemEx_probably_alloc(iVar1,4,0,s_PCX_Image_0055e108);
  if (iVar1 == 0) {
    MessageBoxA(GLBL_WindowHandle_,s_No_Mem_0055e0f0,s_Pcx_loadimage_0055e0f8,0);
    return 0;
  }
  Image_ReadPixels(param_1,iVar1);
  if (1 < DAT_005b9d14) {
    uVar2 = mem_GetMemEx_probably_alloc(0x20,4,0,s_PCX_NAME_0055e0e4);
    str_sprintf(uVar2,s_<<<__s_0055e0dc,param_1);
    Mem_SetTag(iVar1,uVar2);
  }
  return iVar1;
}

