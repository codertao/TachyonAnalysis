
/* refine: ent +0x28..0x30 = R_cam^-1 (pos - cam) */

void Ent_ToCameraSpace(int param_1)

{
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x1c) - DAT_00666ab0;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x20) - DAT_00666ab4;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x24) - DAT_00666ab8;
  call_Rot_SetSinCos((float *)&DAT_00666ac8);
  Rot_ApplyCurrent(param_1 + 0x28,param_1 + 0x28);
  return;
}

