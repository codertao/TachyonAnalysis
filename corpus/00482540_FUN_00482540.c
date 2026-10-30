
void FUN_00482540(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_6c [108];
  
  local_74 = 3.4028235e+38;
  local_70 = 0.0;
  local_78 = 0.0;
  puVar2 = &DAT_0056e440;
  iVar3 = 0x10;
  do {
    iVar1 = Cbin_LoadFile(puVar2,local_6c);
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
      FUN_0049adb0(local_6c);
    }
    puVar2 = puVar2 + 0x100;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (param_4 != (float *)0x0) {
    *param_4 = local_74;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = local_70;
  }
  return;
}

