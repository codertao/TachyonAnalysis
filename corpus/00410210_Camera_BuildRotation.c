
/* sweep */

void Camera_BuildRotation(void)

{
  if ((code *)DAT_005b95e0[6] != (code *)0x0) {
    (*(code *)DAT_005b95e0[6])(*DAT_005b95e0);
  }
  call_Math_SinCos3((float *)&DAT_005b9628,-DAT_005b95e8,-DAT_005b95ec,-DAT_005b95f0);
  return;
}

