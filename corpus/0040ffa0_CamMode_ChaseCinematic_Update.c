
/* sweep */

void CamMode_ChaseCinematic_Update(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_18 = DAT_005b95e8;
  local_14 = DAT_005b95ec;
  local_10 = DAT_005b95f0;
  if (param_1 == GLBL_SOME_CONTEXT) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(DAT_005b1f0c + 0x290);
  }
  Camera_ChaseStepCutscene(param_1);
  Camera_LookAtEntity(param_1,1,1);
  Camera_LookAt(local_c,&local_18,&DAT_005b95e8);
  Camera_ApplyAnglesFixed(local_c);
  Camera_SetFromAngles(&DAT_005b9688,&DAT_005b95e8);
  return;
}

