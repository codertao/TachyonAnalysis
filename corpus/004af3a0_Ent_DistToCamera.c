
/* refine: approx |camera - entity| (duplicate of Ent_CameraDistance) */

void Ent_DistToCamera(int param_1)

{
  int local_c;
  int local_8;
  int local_4;
  
  local_c = DAT_00666ab0 - *(int *)(param_1 + 0x1c);
  local_8 = DAT_00666ab4 - *(int *)(param_1 + 0x20);
  local_4 = DAT_00666ab8 - *(int *)(param_1 + 0x24);
  call_approx_vec_length(&local_c);
  return;
}

