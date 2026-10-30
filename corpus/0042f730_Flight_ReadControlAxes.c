
/* poll stick (Input_SampleAxes 0x4a29c0), apply deadzone (+-0x80) to raw axes 0x5640b0/b4/bc, write
   processed pitch/yaw/roll -> g_AxisPYR 0x5aeea0/a8/b0 and throttle 0x5aeeb8 (unless overridden) */

void Flight_ReadControlAxes(void)

{
  Input_SampleAxes();
  if ((-0x81 < DAT_005640b0) && (DAT_005640b0 < 0x80)) {
    DAT_005640b0 = 0;
  }
  if ((-0x81 < DAT_005640b4) && (DAT_005640b4 < 0x80)) {
    DAT_005640b4 = 0;
  }
  if ((-0x81 < (int)DAT_005640bc) && ((int)DAT_005640bc < 0x80)) {
    DAT_005640bc = 0;
  }
  if (DAT_005b2c84 != 0) {
    DAT_005aeeb8 = DAT_005640b8;
  }
  if (DAT_005aeea4 == 0) {
    DAT_005aeea0 = DAT_005640b0;
  }
  if (DAT_005aeeac == 0) {
    DAT_005aeea8 = DAT_005640b4;
  }
  if (DAT_005aeeb4 == 0) {
    DAT_005aeeb0 = -(uint)(DAT_005b2c80 != 0) & DAT_005640bc;
  }
  return;
}

