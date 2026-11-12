
/* sweep: guess */

int Image_DetectFormat(void)

{
  int local_4;
  
  Fs_Read(&local_4,4);
  Fs_Seek(0,0);
  if (local_4 == 0x801050a) {
    return 0;
  }
  return (-(uint)((short)local_4 != 0x4d42) & 0xfffffffe) + 1;
}

