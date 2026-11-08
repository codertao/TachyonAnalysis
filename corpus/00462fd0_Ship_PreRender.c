
/* ship +0x5c: if des has ANIMFILE, pose YAW_RIGHT/YAW_LEFT weighted by smoothed yaw (+0xf8 >>9, max
   256); 0 -> rest pose */

void Ship_PreRender(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *(short *)(param_1 + 0x18) = (short)(DAT_005b3304 >> 1);
  iVar3 = *(int *)(iVar1 + 0xd4);
  if (iVar3 < 0x21) {
    *(int *)(param_1 + 0x14) = iVar3;
  }
  else {
    uVar2 = global_bad_shift_rng();
    *(uint *)(param_1 + 0x14) = (iVar3 >> 1) + (iVar3 >> 2) + uVar2 % (uint)(iVar3 >> 2);
  }
  if (*(int *)(*(int *)(iVar1 + 0x8c) + 0x568) != 0) {
    iVar3 = *(int *)(iVar1 + 0xf8);
    if (iVar3 < 1) {
      if (iVar3 < 0) {
        iVar3 = -iVar3 >> 9;
        if (0x100 < iVar3) {
          iVar3 = 0x100;
        }
        Anim_ApplyPoseWeighted
                  (iVar1,s_YAW_LEFT_0054a220,param_2,param_3,param_4,iVar3,
                   *(undefined4 *)(iVar1 + 0xd0));
      }
      else if (0 < param_4) {
        puVar4 = (undefined4 *)(param_2 + 8);
        do {
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4 = puVar4 + 0xb;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else {
      iVar3 = iVar3 >> 9;
      if (0x100 < iVar3) {
        iVar3 = 0x100;
      }
      Anim_ApplyPoseWeighted
                (iVar1,s_YAW_RIGHT_0054a22c,param_2,param_3,param_4,iVar3,
                 *(undefined4 *)(iVar1 + 0xd0));
    }
  }
  DAT_00668f38 = *(uint *)(param_1 + 0x14);
  if (0xff < DAT_00668f38) {
    DAT_00668f38 = 0xff;
  }
  return;
}

