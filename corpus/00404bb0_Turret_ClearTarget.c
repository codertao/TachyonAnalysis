
/* desired aim = current, target = 0, solution flag +0x150 = 0 */

void Turret_ClearTarget(SpED *param_1)

{
  int iVar1;
  
  (param_1->lastPos).x = param_1->currX;
  iVar1 = param_1->currZ;
  (param_1->lastPos).y = param_1->currY;
  (param_1->lastPos).z = iVar1;
  param_1->suspected_tgt = 0;
  (param_1->someVec).x = 0;
  (param_1->someVec).y = 0;
  (param_1->someVec).z = 0;
  param_1->field291_0x150 = 0;
  return;
}

