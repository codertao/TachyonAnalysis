
void FUN_00498710(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 == 0) {
    puVar3 = &DAT_0058b03c;
  }
  else {
    param_3 = &DAT_005b31c0;
    puVar3 = &DAT_005b32b0;
  }
  iVar2 = DcbPool_Alloc(puVar3,0x17,param_3);
  if (iVar2 != 0) {
    *(undefined2 *)(iVar2 + 0x74) = 2;
    *(undefined4 *)(iVar2 + 0x58) = DAT_005656b0;
    *(code **)(iVar2 + 0x70) = FUN_00492d30;
    *(undefined4 *)(iVar2 + 0x34) = *param_1;
    *(undefined4 *)(iVar2 + 0x38) = param_1[1];
    *(undefined4 *)(iVar2 + 0x3c) = param_1[2];
    puVar1 = (undefined4 *)(iVar2 + 0x18);
    *(code **)(iVar2 + 0x68) = FUN_004986c0;
    *puVar1 = 0;
    *(undefined2 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0xff;
    *(undefined4 *)(iVar2 + 0x1c) = 0x10000;
    *(undefined4 *)(iVar2 + 200) = 0xfa;
    *(int *)(iVar2 + 0xcc) = param_2;
    FUN_0041b850(iVar2);
    if (param_2 == 0) {
      FUN_0045d060(iVar2,*(int *)(iVar2 + 100) + 0x14);
      FUN_004b2950(puVar1,0);
      return;
    }
    FUN_00466770(1,1,0x1e,param_1,0x10000,0xff,0);
    FUN_004b2950(puVar1,0);
  }
  return;
}

