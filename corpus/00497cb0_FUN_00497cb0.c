
void FUN_00497cb0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = 0x10000;
  if ((param_2 != (int *)0x0) && (iVar1 = *param_2, iVar1 != 0)) {
    iVar2 = Weapon_PreFire(iVar1,0,0,&local_4,param_3,param_2);
    if (iVar2 == 2) {
      (**(code **)(iVar1 + 0xe0))(param_1,iVar1);
    }
  }
  return;
}

