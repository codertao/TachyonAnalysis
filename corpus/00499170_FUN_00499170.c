
void FUN_00499170(undefined4 param_1,vec3 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_18 [24];
  
  param_2->x = DAT_0055d63c;
  param_2->y = DAT_0055d640;
  param_2->z = DAT_0055d644;
  iVar3 = DAT_0055d638;
  iVar2 = DAT_0055d634;
  iVar1 = DAT_0055d630;
  uVar4 = FUN_00498d70(param_3);
  uVar4 = uVar4 >> 0xb & 0x1ffffc;
  param_2->x = param_2->x + (uVar4 - iVar1);
  param_2->y = param_2->y - iVar2;
  param_2->z = param_2->z + (uVar4 - iVar3);
  FUN_004b1bb0(local_18,(vec3 *)(param_3 + 0x4c));
  some_rotate_by_global(param_2,param_2);
  param_2->x = param_2->x + *(int *)(param_3 + 0x34);
  param_2->y = param_2->y + *(int *)(param_3 + 0x38);
  param_2->z = param_2->z + *(int *)(param_3 + 0x3c);
  return;
}

