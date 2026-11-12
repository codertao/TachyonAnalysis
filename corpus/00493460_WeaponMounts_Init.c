
void WeaponMounts_Init(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  clr_bytes(param_1,0xc);
  *param_1 = param_2;
  param_1[2] = param_3;
  iVar1 = WeaponDef_Get(param_4);
  param_1[1] = iVar1;
  uVar2 = WeaponDef_Get(param_4);
  iVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(int *)(iVar1 + 0x18) = iVar1 + 0x1c;
    WeaponMount_InitOrient(iVar1,uVar2);
    iVar1 = iVar1 + 0x1c;
  }
  *(int *)(iVar1 + -4) = param_2;
  return;
}

