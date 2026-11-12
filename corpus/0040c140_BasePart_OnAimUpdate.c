
/* sweep */

void BasePart_OnAimUpdate(int param_1,int param_2)

{
  int local_c;
  int local_8;
  int local_4;
  
  if ((g_FlightStateFlags & 4) == 0) {
    if ((*(int *)(param_1 + 0xd4) != 0) && ((*(byte *)(*(int *)(param_1 + 0xd4) + 0x34) & 6) != 0))
    {
      local_c = (uint)*(ushort *)(param_2 + 0xc) << 0x10;
      local_8 = (uint)*(ushort *)(param_2 + 0xe) << 0x10;
      local_4 = (uint)*(ushort *)(param_2 + 0x10) << 0x10;
      BasePart_ComputeAimAngles(param_1 + 0x4c,&local_c,param_1 + 0xf8);
      *(undefined1 **)(param_1 + 0x5c) = &LAB_0040ae40;
    }
  }
  return;
}

