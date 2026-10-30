
void FUN_00416120(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != -1) {
    iVar1 = FUN_0041dc00(param_2);
    Desc_CreateByType(iVar1 + 4,(int *)(param_1 + 0x8c),0,&param_2,1,0xffffffff);
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 != 0) {
      if (*(code **)(iVar1 + 0x20) != (code *)0x0) {
        (**(code **)(iVar1 + 0x20))(param_1,iVar1,param_3);
      }
      if (*(code **)(iVar1 + 0x38) != (code *)0x0) {
        (**(code **)(iVar1 + 0x38))(param_1,0x16,0);
      }
    }
  }
  return;
}

