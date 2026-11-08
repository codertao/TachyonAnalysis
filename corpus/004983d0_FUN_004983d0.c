
int FUN_004983d0(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (param_6 == 0) {
    uVar3 = *(undefined4 *)(param_4 + 100);
    puVar2 = &DAT_0058b03c;
  }
  else {
    uVar3 = *(undefined4 *)(param_4 + 100);
    puVar2 = &DAT_005b32b0;
  }
  iVar1 = DcbPool_Alloc(puVar2,3,uVar3);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(iVar1 + 0xdc) = param_1;
  *(undefined4 *)(iVar1 + 0xfc) = *param_2;
  *(undefined4 *)(iVar1 + 0x100) = param_2[1];
  *(undefined4 *)(iVar1 + 0x104) = param_2[2];
  *(undefined4 *)(iVar1 + 0x108) = *param_3;
  *(undefined4 *)(iVar1 + 0x10c) = param_3[1];
  *(undefined4 *)(iVar1 + 0x110) = param_3[2];
  *(int *)(iVar1 + 0xf4) = param_4;
  *(undefined4 *)(iVar1 + 0x114) = param_5;
  *(undefined4 *)(iVar1 + 200) = DAT_00565420;
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(iVar1 + 0x58) = **(undefined4 **)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x7e) = *(undefined1 *)(*(int *)(param_1 + 0x74) + 4);
  if (param_6 == 1) {
    *(undefined1 **)(iVar1 + 0x68) = &Sapper_ThinkPredicted;
    *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(param_1 + 0x94);
    Model_SelectState(iVar1 + 0x18,0);
    FUN_0041b850(iVar1);
    return iVar1;
  }
  *(undefined1 *)(iVar1 + 0xc3) = 1;
  *(code **)(iVar1 + 0x68) = Sapper_ThinkServer;
  FUN_0041b850(iVar1);
  return iVar1;
}

