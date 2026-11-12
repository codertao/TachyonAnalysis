
/* sweep */

undefined4 Ship_GetExteriorPak(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_6c [108];
  
  uVar1 = Ship_GetCurrentModel(local_6c);
  iVar2 = Cbin_LoadFile(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  Cbin_FindSection(&DAT_00532af4,local_6c);
  Cbin_GetParam_Ctx(&DAT_00532af4,&DAT_00532c10,param_3,0x1f,0,4,1,local_6c);
  Cbin_FindParam(s_EXTERIOR_PAK_00532ae4,param_1,0xf,0,4,1,local_6c);
  Cbin_GetParamN_Ctx(s_EXTERIOR_PAK_00532ae4,param_2,0xf,0,4,2,local_6c);
  Cbin_Free(local_6c);
  return 1;
}

