
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (up@ESI, fwd@EDI, outAng@EBP) Euler angles (yaw from fwd x/z, then pitch, then roll from up) via
   Math_Atan2Core; rotates the input vectors in place */

void __cdecl Vec_BasisToAngles(vec3 *up,vec3 *fwd,vec3 *outAng)

{
  longlong lVar1;
  longlong lVar2;
  vec3 *pvVar3;
  
  DAT_004dff88 = outAng;
  DAT_004dff8c = Math_Atan2Core();
  DAT_004dff98 = MathAsm_TrigTableLookup();
  DAT_004dff9c = MathAsm_TrigTableLookup();
  DAT_004dff84 = up->x;
  lVar1 = (longlong)DAT_004dff9c * (longlong)up->x;
  lVar2 = (longlong)DAT_004dff98 * (longlong)up->z;
  up->x = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
          ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)DAT_004dff9c * (longlong)up->z;
  up->z = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) -
          ((uint)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x20) << 0x10);
  DAT_004dff84 = fwd->x;
  lVar1 = (longlong)DAT_004dff9c * (longlong)fwd->z;
  _DAT_004dff80 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  fwd->z = _DAT_004dff80 -
           ((uint)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x10 |
           (int)((ulonglong)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x20) << 0x10);
  DAT_004dff90 = Math_Atan2Core();
  DAT_004dff98 = MathAsm_TrigTableLookup();
  DAT_004dff9c = MathAsm_TrigTableLookup();
  DAT_004dff84 = up->z;
  lVar1 = (longlong)DAT_004dff9c * (longlong)up->y;
  _DAT_004dff80 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  up->y = _DAT_004dff80 -
          ((uint)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_004dff98 * (longlong)DAT_004dff84) >> 0x20) << 0x10);
  DAT_004dff94 = Math_Atan2Core();
  pvVar3 = DAT_004dff88;
  DAT_004dff88->x = DAT_004dff8c & 0x1ffffff;
  pvVar3->y = DAT_004dff90 & 0x1ffffff;
  pvVar3->z = DAT_004dff94 & 0x1ffffff;
  return;
}

