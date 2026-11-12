
/* sweep: DEFAULTS */

void VarStore_ApplyDefaults(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char local_60 [32];
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  iVar1 = Cbin_Open(param_1);
  if (iVar1 != 0) {
    Cbin_SelectGroup(s_DEFAULTS_00559e18);
    iVar1 = Cbin_FindParam_Global(&DAT_00559de0,local_40,0x20,0,4,1);
    while (iVar1 != 0) {
      local_60[0] = '\0';
      Cbin_GetParamN(&DAT_00559de0,local_20,0x20,0,4,2);
      Cbin_GetParamN(&DAT_00559de0,local_60,0x20,0,4,3);
      if (DAT_00561464 < 2) {
        uVar2 = *(ushort *)(PTR_DAT_00561258 + local_60[0] * 2) & 0x103;
      }
      else {
        uVar2 = Crt_isctype((int)local_60[0],0x103);
      }
      if (uVar2 == 0) {
        uVar3 = _atoi(local_60);
        Var_SetInt(param_2,local_40,local_20,uVar3);
      }
      else {
        Var_SetStr(param_2,local_40,local_20);
      }
      iVar1 = Cbin_FindParam_Global(&DAT_00559de0,local_40,0x20,0,4,1);
    }
    Cbin_Close();
  }
  return;
}

