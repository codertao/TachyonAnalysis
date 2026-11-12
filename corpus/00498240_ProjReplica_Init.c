
/* sweep */

void ProjReplica_Init(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = WeaponDef_Get(param_2);
  *(undefined4 *)(param_1 + 0x8c) = DAT_00565798;
  *(undefined2 *)(param_1 + 0x76) = 0x1b;
  *(code **)(param_1 + 0x68) = Tractor_Think;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(int *)(param_1 + 0xd4) = iVar1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + 0x94);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x90);
  ProjReplica_Orient(param_1);
  Model_SelectState((undefined4 *)(param_1 + 0x18),0);
  if (*(code **)(iVar1 + 0xbc) != (code *)0x0) {
    (**(code **)(iVar1 + 0xbc))(param_1,iVar1);
  }
  return;
}

