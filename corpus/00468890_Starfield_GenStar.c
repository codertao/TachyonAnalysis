
/* sweep */

void Starfield_GenStar(float *param_1)

{
  uint uVar1;
  uint uVar2;
  vec3 local_24;
  float local_18 [6];
  
  uVar1 = global_bad_shift_rng();
  uVar2 = global_bad_shift_rng();
  call_Math_SinCos3(local_18,uVar1 & 0xffffff,uVar2 & 0x1ffffff,0);
  call_Rot_SetSinCos(local_18);
  call_Rot_AboutX((vec3 *)&DAT_0054a6a0,&local_24);
  call_Rot_AboutY(&local_24,&local_24);
  Starfield_RandomDir(&local_24,0x20000000);
  *param_1 = (float)local_24.x;
  param_1[1] = (float)local_24.y;
  param_1[2] = (float)local_24.z;
  Starfield_RandomColor(param_1 + 5,param_1 + 6);
  uVar1 = global_bad_shift_rng();
  param_1[8] = (float)(uVar1 & 3);
  do {
    uVar1 = global_bad_shift_rng();
  } while ((uVar1 & 0x3fff) < 0x2400);
  param_1[7] = (float)(uVar1 & 0x3fff);
  return;
}

