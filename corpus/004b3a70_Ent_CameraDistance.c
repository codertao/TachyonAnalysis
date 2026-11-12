
/* refine: approx |entity pos - camera pos| */

void Ent_CameraDistance(int param_1)

{
  int local_c;
  int local_8;
  int local_4;
  
  local_c = *(int *)(param_1 + 0x1c) - DAT_00666ab0;
  local_8 = *(int *)(param_1 + 0x20) - DAT_00666ab4;
  local_4 = *(int *)(param_1 + 0x24) - DAT_00666ab8;
  call_approx_vec_length(&local_c);
  return;
}

