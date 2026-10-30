
void FUN_00406dc0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_004060e0(param_2);
  piVar1 = (int *)(param_2 + 0x1c);
  *(int *)(param_2 + 0x18) = iVar2;
  FUN_0048e3d0(piVar1,iVar2 * 0x2c,4,s_ANIM_KEYFRAMES_00532904,0xcccc);
  iVar2 = *piVar1;
  uVar3 = 0;
  if (*(int *)(param_2 + 0x18) != 0) {
    do {
      FUN_004061b0(param_2,iVar2,uVar3);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (uVar3 < *(uint *)(param_2 + 0x18));
  }
  FUN_00406470(param_1,*piVar1,*(undefined4 *)(param_2 + 0x18));
  FUN_00406790(param_2);
  FUN_00406d50(param_2,param_1);
  return;
}

