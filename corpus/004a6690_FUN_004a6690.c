
bool FUN_004a6690(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_3[1] - param_3[2];
  if (uVar5 < 0x10) {
    return param_2 != 0;
  }
  piVar2 = (int *)(param_3[2] + *param_3);
  uVar5 = uVar5 - 0xc;
  if (*(uint *)(param_1 + 0xb8) <= uVar5) {
    uVar5 = *(uint *)(param_1 + 0xb8);
  }
  uVar1 = uVar5 + 3;
  *piVar2 = param_2;
  piVar2[1] = 0;
  piVar3 = piVar2 + 3;
  piVar2[2] = (*(uint *)(param_1 + 0xb4) ^ uVar5) & 0xffffff ^ *(uint *)(param_1 + 0xb4);
  if ((*(byte *)(param_1 + 0xa0) & 2) != 0) {
    *(undefined1 *)piVar3 = 0xf0;
    piVar3 = (int *)((int)piVar2 + 0xd);
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfffffffd;
    uVar5 = uVar5 - 1;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
  }
  FUN_004bd8e0(piVar3,*(undefined4 *)(param_1 + 0xbc),uVar5);
  iVar4 = *(int *)(param_1 + 0xb8) - uVar5;
  *(int *)(param_1 + 0xb8) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  param_3[2] = param_3[2] + (uVar1 & 0xfffffffc) + 0xc;
  return false;
}

