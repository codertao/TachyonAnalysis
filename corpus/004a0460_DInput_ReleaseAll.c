
/* sweep: guess */

void DInput_ReleaseAll(void)

{
  DInput_FreeAllDevices();
  if (DAT_00563ea8 != (int *)0x0) {
    (**(code **)(*DAT_00563ea8 + 0x10))(DAT_00563ea8,4,&LAB_004a03a0,0,0x101);
  }
  return;
}

