
/* sweep */

void DInput_FreeAllDevices(void)

{
  while (DAT_00563ff8 != 0) {
    DInput_FreeDevice(DAT_00563ff8);
  }
  return;
}

