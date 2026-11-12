
/* sweep */

void SceneCam_SetPos(undefined4 param_1,undefined4 *param_2)

{
  Camera_SetFromEntity(param_1,*param_2,param_2[1],param_2[2]);
  return;
}

