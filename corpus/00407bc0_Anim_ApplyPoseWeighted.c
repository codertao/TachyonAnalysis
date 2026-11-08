
/* same, scaled by weight/256 */

void Anim_ApplyPoseWeighted
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  
  if (param_7 != 0) {
    iVar1 = Anim_Find(param_7,param_2);
    if (iVar1 != 0) {
      clr_bytes(*(undefined4 *)(param_7 + 0x14),*(int *)(param_7 + 0xc) * 0xc);
      Anim_SetPoseWeighted
                (param_1,param_7,*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(param_7 + 0x14),0,
                 param_6);
      Anim_CopyPartRotations(param_1 + 0x18,param_3,param_5,*(undefined4 *)(param_7 + 0x14),param_7)
      ;
    }
  }
  return;
}

