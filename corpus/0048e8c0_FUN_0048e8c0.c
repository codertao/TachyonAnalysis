
undefined8 __fastcall FUN_0048e8c0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  return CONCAT44(param_2,(param_3 & 0xfffffff0) << ((byte)param_3 & 0xf | 1) ^
                          (int)((uint)(param_3 >> 1) | (uint)((param_3 & 1) != 0) << 0x1f) >> 0x1f);
}

