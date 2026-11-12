
/* sweep: guess */

void Starfield_DrawPoints(void)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
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
  
  Gfx_Lock(2);
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
  Vec3i_ToFloat(&local_54,&local_18);
  Vec3i_ToFloat(&local_48,&local_30);
  Vec3i_ToFloat(&local_3c,&local_24);
  Gfx_SetVar_60f870(0x8000000);
  iVar3 = 2000;
  pfVar2 = DAT_0058975c;
  do {
    local_5c._0_4_ =
         (int)(longlong)ROUND(local_18 * *pfVar2 + local_24 * pfVar2[2] + local_30 * pfVar2[1]);
    local_c = (int)local_5c;
    local_5c._0_4_ =
         (int)(longlong)ROUND(local_14 * *pfVar2 + local_20 * pfVar2[2] + local_2c * pfVar2[1]);
    local_8 = (int)local_5c;
    local_5c = (longlong)ROUND(local_10 * *pfVar2 + local_1c * pfVar2[2] + local_28 * pfVar2[1]);
    local_4 = (int)local_5c;
    if (0xf9fffff < (int)local_5c) {
      View_ProjectPointFixed(&local_c,&local_64);
      uVar1 = (uint)pfVar2[7] >> 7;
      Gfx_DefineColor(0x1f,uVar1,uVar1,uVar1);
      Gfx_DrawLine((int)local_64 >> 7,(int)local_60 >> 7,(int)local_64 >> 7,(int)local_60 >> 7,
                   DAT_005a633f);
      pfVar2[3] = local_64;
      pfVar2[4] = local_60;
    }
    pfVar2 = pfVar2 + 9;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  Gfx_SetVar_60f870(0);
  return;
}

