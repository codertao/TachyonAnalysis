
void FUN_00493ce0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar3 = *(undefined4 **)(param_2 + 0xdc);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = 0;
  if ((*(byte *)(puVar3 + 0x36) & 1) != 0) {
    local_10 = *(int *)(param_2 + 200);
  }
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x94)) {
    if (param_1 != local_10) {
      puVar1 = (undefined4 *)(param_1 + 0x34);
      iVar2 = param_2 + 0x34;
      iVar4 = FUN_0048e440(iVar2,puVar1);
      iVar4 = iVar4 - *(int *)(*(int *)(param_1 + 0x58) + 0x30);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      if (iVar4 < param_3) {
        iVar4 = FUN_004b36b0(iVar2,puVar1,param_1 + 0x18,&local_c,0,*(undefined4 *)(param_2 + 0xc4))
        ;
        if (iVar4 == 0) {
          local_c = *puVar1;
          local_8 = *(undefined4 *)(param_1 + 0x38);
          local_4 = *(undefined4 *)(param_1 + 0x3c);
        }
        FUN_00493320(*puVar3,*(undefined4 *)(param_2 + 200),iVar2,&local_c,0,
                     *(undefined4 *)(param_1 + 0x78),param_1,*(int *)(param_2 + 0x2c) << 8,
                     *(undefined4 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 100));
        if (*(code **)(param_1 + 0x80) != (code *)0x0) {
          (**(code **)(param_1 + 0x80))(param_1);
        }
      }
    }
  }
  return;
}

