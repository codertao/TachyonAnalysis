
void FUN_00401b30(int param_1,vec3 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18 [24];
  
  iVar2 = *(int *)(param_1 + 0xf8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x100) + 0x24);
    piVar1 = (int *)(iVar3 + (uint)*(ushort *)(param_1 + 0xf4) * 0xc);
    param_2->x = *piVar1;
    param_2->y = piVar1[1];
    param_2->z = piVar1[2];
    piVar1 = (int *)(iVar3 + (uint)*(ushort *)(iVar2 + 0xf4) * 0xc);
    iVar3 = piVar1[1];
    iVar4 = piVar1[2];
    param_2->x = param_2->x - *piVar1;
    param_2->y = param_2->y - iVar3;
    param_2->z = param_2->z - iVar4;
    FUN_004b1bb0(local_18,(vec3 *)(iVar2 + 0x4c));
    some_rotate_by_global(param_2,param_2);
    param_2->x = param_2->x + *(int *)(iVar2 + 0x34);
    param_2->y = param_2->y + *(int *)(iVar2 + 0x38);
    param_2->z = param_2->z + *(int *)(iVar2 + 0x3c);
  }
  return;
}

