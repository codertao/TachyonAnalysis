
/* (ent, name, parts, ?, nParts, anim): full pose straight into the model parts */

void Anim_ApplyPose(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,int param_6)

{
  int iVar1;
  
  if (param_6 != 0) {
    iVar1 = Anim_Find(param_6,param_2);
    if (iVar1 != 0) {
      clr_bytes(*(undefined4 *)(param_6 + 0x14),*(int *)(param_6 + 0xc) * 0xc);
      Anim_SetPose(param_1,param_6,*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(param_6 + 0x14),0);
      Anim_CopyPartRotations(param_1 + 0x18,param_3,param_5,*(undefined4 *)(param_6 + 0x14),param_6)
      ;
    }
  }
  return;
}

