
/* sweep: guess */

void WingStat_FindMax(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_6c [108];
  
  uVar2 = 0;
  local_74 = 3.4028235e+38;
  local_70 = 0.0;
  local_78 = 0.0;
  if (DAT_00589720 != 0) {
    iVar3 = DAT_00589724 + 0x54;
    do {
      iVar1 = Cbin_LoadFile(iVar3,local_6c);
      if (iVar1 != 0) {
        iVar1 = Cbin_GetParam_Ctx(param_1,param_2,0,0,&local_78,2,1,local_6c);
        if (iVar1 != 0) {
          if (local_78 < local_74) {
            local_74 = local_78;
          }
          if (local_70 < local_78) {
            local_70 = local_78;
          }
        }
        Cbin_Free(local_6c);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0xe0;
    } while (uVar2 < DAT_00589720);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = local_74;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = local_70;
  }
  return;
}

