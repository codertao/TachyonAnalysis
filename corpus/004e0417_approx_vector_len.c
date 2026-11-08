
undefined8 __fastcall approx_vector_len(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  int y;
  int min_xy;
  int z;
  int x;
  int min_xz;
  longlong s_coords_4;
  
  x = *in_EAX;
  if (x < 0) {
    x = -x;
  }
  y = in_EAX[1];
  if (y < 0) {
    y = -y;
  }
  z = in_EAX[2];
  if (z < 0) {
    z = -z;
  }
  min_xy = y;
  if (x < y) {
    min_xy = x;
    x = y;
  }
  min_xz = z;
  if (x < z) {
    min_xz = x;
    x = z;
  }
  s_coords_4 = (longlong)(min_xy + min_xz) * 0x5000;
  x = x + ((uint)s_coords_4 >> 0x10 | (int)((ulonglong)s_coords_4 >> 0x20) << 0x10);
  if (x == 0) {
    x = 1;
  }
  return CONCAT44(param_2,x);
}

