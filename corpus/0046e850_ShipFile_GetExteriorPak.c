
/* sweep */

undefined4
ShipFile_GetExteriorPak(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_6c [108];
  
  iVar1 = Cbin_LoadFile(param_1,local_6c);
  if (iVar1 == 0) {
    return 0;
  }
  Cbin_FindSection(&DAT_00532af4,local_6c);
  Cbin_GetParam_Ctx(&DAT_00532af4,&DAT_00532c10,param_4,0x1f,0,4,1,local_6c);
  Cbin_FindParam(s_EXTERIOR_PAK_00532ae4,param_2,0xf,0,4,1,local_6c);
  Cbin_GetParamN_Ctx(s_EXTERIOR_PAK_00532ae4,param_3,0xf,0,4,2,local_6c);
  Cbin_Free(local_6c);
  return 1;
}

