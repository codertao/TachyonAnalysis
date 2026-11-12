
/* sweep */

void Camera_PostRender(void)

{
  if (DAT_005b95e0[8] != 0) {
    Rend_SetCamera(&DAT_005b9600,&DAT_005b95e8);
    (*(code *)DAT_005b95e0[8])(*DAT_005b95e0);
  }
  return;
}

