
/* vec: rotate by instance +0x34 angles, add instance pos +0x1c (seg-cast hit back to world) */

void Model_LocalToWorld(int param_1,vec3 *param_2)

{
  float local_18 [6];
  
  call_Math_SinCos3(local_18,*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x38),
                    *(int *)(param_1 + 0x3c));
  call_Rot_SetSinCos(local_18);
  some_rotate_by_global(param_2,param_2);
  param_2->x = param_2->x + *(int *)(param_1 + 0x1c);
  param_2->y = param_2->y + *(int *)(param_1 + 0x20);
  param_2->z = param_2->z + *(int *)(param_1 + 0x24);
  return;
}

