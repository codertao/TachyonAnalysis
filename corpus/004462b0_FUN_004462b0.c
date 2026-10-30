
void FUN_004462b0(undefined4 param_1,undefined4 param_2,float *param_3,float *param_4,int param_5)

{
  int iVar1;
  float local_88;
  float local_84;
  float local_80;
  undefined4 *local_7c;
  int local_78;
  uint local_74;
  undefined4 uStack_70;
  undefined1 local_6c [108];
  
  local_7c = &DAT_00583580;
  local_80 = 3.4028235e+38;
  local_84 = 0.0;
  local_88 = 0.0;
  local_78 = 0x20;
  do {
    iVar1 = Cbin_LoadFile(local_7c,local_6c);
    if (iVar1 != 0) {
      if (param_5 == 0) {
        iVar1 = Cbin_GetParam_Ctx(param_1,param_2,0,0,&local_88,2,1,local_6c);
        if (iVar1 != 0) goto LAB_00446332;
      }
      else {
        local_74 = FUN_0049c120(param_5,local_6c,1);
        uStack_70 = 0;
        local_88 = (float)local_74;
LAB_00446332:
        if (local_88 < local_80) {
          local_80 = local_88;
        }
        if (local_84 < local_88) {
          local_84 = local_88;
        }
      }
      FUN_0049adb0(local_6c);
    }
    local_7c = local_7c + 0x1a;
    local_78 = local_78 + -1;
    if (local_78 == 0) {
      if (param_4 != (float *)0x0) {
        *param_4 = local_80;
      }
      if (param_3 != (float *)0x0) {
        *param_3 = local_84;
      }
      return;
    }
  } while( true );
}

