
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: side-cull slopes from view width/height and focal length */

void Rend_SetFrustumSlopes(int param_1)

{
  undefined8 local_8;
  
  local_8 = (ulonglong)*(uint *)(param_1 + 8);
  local_8._0_4_ =
       (undefined4)
       (longlong)ROUND(((float)local_8 / (float)(*(int *)(param_1 + 0x30) << 1)) * _DAT_0052e544);
  DAT_00668f64 = (undefined4)local_8;
  local_8 = (ulonglong)*(uint *)(param_1 + 0xc);
  local_8._0_4_ =
       (undefined4)
       (longlong)ROUND(((float)local_8 / (float)(*(int *)(param_1 + 0x30) << 1)) * _DAT_0052e544);
  DAT_00668f68 = (undefined4)local_8;
  return;
}

