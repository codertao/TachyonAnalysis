
/* sweep */

void ShipDes_LoadCamera(int param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  Cbin_GetScalar(s_CAMERA_00549260,s_CAMERA_POINT_SLOT_0054a278,0,0,&local_4);
  ShipDes_ResolvePointSlot(local_4,param_2,param_1 + 0x530,0x10000);
  return;
}

