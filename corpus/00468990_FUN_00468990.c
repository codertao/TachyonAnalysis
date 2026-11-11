
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468990(void)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_68;
  float local_64;
  float local_60;
  longlong local_5c;
  vec3 local_54;
  vec3 local_48;
  vec3 local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  FUN_00452180(2);
  call_Rot_SetSinCos((float *)&DAT_005b9628);
  call_Rot_AboutY((vec3 *)&DAT_0054a6b0,&local_54);
  call_Rot_AboutX(&local_54,&local_54);
  call_Rot_AboutZ(&local_54,&local_54);
  call_Rot_AboutY((vec3 *)&DAT_0054a6c0,&local_48);
  call_Rot_AboutX(&local_48,&local_48);
  call_Rot_AboutZ(&local_48,&local_48);
  call_Rot_AboutY((vec3 *)&DAT_0054a6d0,&local_3c);
  call_Rot_AboutX(&local_3c,&local_3c);
  call_Rot_AboutZ(&local_3c,&local_3c);
  FUN_0048e410(&local_54,&local_24);
  FUN_0048e410(&local_48,&local_30);
  FUN_0048e410(&local_3c,&local_18);
  FUN_004abca0(0x8000000);
  local_68 = 2000;
  pfVar3 = DAT_0058975c;
  do {
    local_5c._0_4_ =
         (int)(longlong)ROUND(local_18 * pfVar3[2] + local_24 * *pfVar3 + local_30 * pfVar3[1]);
    local_c = (int)local_5c;
    local_5c._0_4_ =
         (int)(longlong)ROUND(local_14 * pfVar3[2] + local_20 * *pfVar3 + local_2c * pfVar3[1]);
    local_8 = (int)local_5c;
    local_5c = (longlong)ROUND(local_10 * pfVar3[2] + local_1c * *pfVar3 + local_28 * pfVar3[1]);
    local_4 = (int)local_5c;
    if ((int)local_5c < 0xfa00000) {
      pfVar3[3] = 0.0;
      pfVar3[4] = 0.0;
    }
    else {
      FUN_004b2e00(&local_c,&local_64);
      if ((pfVar3[3] == 0.0) || (pfVar3[4] == 0.0)) {
        uVar5 = 0;
        uVar6 = 0;
        _DAT_005a631c = (uint)pfVar3[7] >> 7;
      }
      else {
        iVar4 = (int)local_64 - (int)pfVar3[3];
        uVar5 = iVar4 >> 2;
        uVar1 = iVar4 >> 0x1f;
        iVar4 = (int)local_60 - (int)pfVar3[4];
        uVar6 = iVar4 >> 2;
        uVar1 = (uVar5 ^ uVar1) - uVar1;
        uVar2 = iVar4 >> 0x1f;
        uVar2 = (uVar6 ^ uVar2) - uVar2;
        if (uVar1 < uVar2) {
          iVar4 = (uVar1 >> 2) + 0x380 + uVar2;
          if (iVar4 < 0x401) goto LAB_00468b8c;
          _DAT_005a631c = (uint)((int)pfVar3[7] * (int)(0x20000 / (longlong)iVar4)) >> 0xe;
        }
        else {
          iVar4 = (uVar2 >> 2) + 0x380 + uVar1;
          if (iVar4 < 0x401) {
LAB_00468b8c:
            _DAT_005a631c = ((uint)pfVar3[7] & 0x1ffffff) >> 7;
          }
          else {
            _DAT_005a631c = (uint)((int)pfVar3[7] * (int)(0x20000 / (longlong)iVar4)) >> 0xe;
          }
        }
      }
      DAT_005a6318 = 1;
      FUN_004abcc0(0x1f,0xff,0xff,0xff);
      Gfx_DrawLine((int)local_64 >> 7,(int)local_60 >> 7,(int)((int)local_64 + uVar5) >> 7,
                   (int)((int)local_60 + uVar6) >> 7,DAT_005a633f);
      pfVar3[3] = local_64;
      pfVar3[4] = local_60;
      DAT_005a6318 = 0;
    }
    pfVar3 = pfVar3 + 9;
    local_68 = local_68 + -1;
    if (local_68 == 0) {
      FUN_004abca0(0);
      return;
    }
  } while( true );
}

