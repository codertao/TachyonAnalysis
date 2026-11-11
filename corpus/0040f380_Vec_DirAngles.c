
/* (a,b) -> yaw=atan2(dx,dz), pitch=atan2(dy,-|dxz|) of a-b (halved), roll 0 */

void Vec_DirAngles(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_c [3];
  
  iVar3 = param_1[2] - param_2[2] >> 1;
  iVar2 = *param_1 - *param_2 >> 1;
  uVar1 = Math_Atan2(iVar2,iVar3);
  *param_3 = uVar1;
  local_c[1] = 0;
  local_c[0] = iVar2;
  local_c[2] = iVar3;
  iVar2 = FUN_004e046f(local_c);
  uVar1 = Math_Atan2(param_1[1] - param_2[1] >> 1,-iVar2);
  param_3[2] = 0;
  param_3[1] = uVar1;
  return;
}

