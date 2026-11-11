
/* aim = tgtPos + tgtVel * (dist/projSpeed + rand(spread) - spread/2); no lead if speed <= 0x8000 */

void Ai_LeadAimPoint(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,
                    int param_6,undefined4 param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_8 == 0) {
    param_8 = 0x20;
  }
  if (0x8000 < param_6) {
    uVar1 = global_bad_shift_rng();
    iVar2 = uVar1 % param_8 + (param_5 / param_6 - (param_8 >> 1));
    if (-1 < iVar2) goto LAB_00402a5c;
  }
  iVar2 = 0;
LAB_00402a5c:
  local_c = *param_3 * iVar2 + *param_2;
  local_4 = param_3[2] * iVar2 + param_2[2];
  local_8 = param_3[1] * iVar2 + param_2[1];
  Vec_DirAngles(param_1,&local_c,param_7);
  return;
}

