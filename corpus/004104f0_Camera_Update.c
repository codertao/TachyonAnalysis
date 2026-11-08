
/* in-flight camera update: camera DCB 0x5b95e0; call cam method +0x1c (cam[7]); compute view delta
   + build view matrix (0x52db6a); DAT_005b9600.. = cam pos */

void Camera_Update(void)

{
  int local_c;
  int local_8;
  int local_4;
  
  if ((*DAT_005b95e0 == 0) && ((*(byte *)(DAT_005b95e0 + 3) & 8) == 0)) {
    FUN_004103b0();
    Camera_Update();
    return;
  }
  DAT_005b960c = DAT_005b9600;
  DAT_005b9610 = DAT_005b9604;
  DAT_005b9614 = DAT_005b9608;
  if ((code *)DAT_005b95e0[7] != (code *)0x0) {
    (*(code *)DAT_005b95e0[7])(*DAT_005b95e0);
  }
  local_8 = DAT_005b9604 - DAT_005b9610;
  local_c = DAT_005b9600 - DAT_005b960c;
  local_4 = DAT_005b9608 - DAT_005b9614;
  DAT_005b9624 = call_approx_vec_length(&local_c);
  FUN_004103e0();
  call_math_todo_with_rotation(&DAT_005b9628,-DAT_005b95e8,-DAT_005b95ec,-DAT_005b95f0);
  return;
}

