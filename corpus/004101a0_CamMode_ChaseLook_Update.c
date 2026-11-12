
/* sweep */

void CamMode_ChaseLook_Update(undefined4 param_1)

{
  Camera_ChaseStep(param_1);
  Camera_LookAtEntity(param_1,0,1);
  return;
}

