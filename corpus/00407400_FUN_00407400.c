
void FUN_00407400(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      return;
    }
    if (*(int *)(param_1 + 0x48) == 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x28);
      DAT_005b9644 = DAT_005b9644 + *(int *)(param_1 + 0x38);
      DAT_005b9654 = DAT_005b9654 + *(int *)(param_1 + 0x3c);
      DAT_005b9658 = DAT_005b9658 + *(int *)(param_1 + 0x40);
      DAT_005b965c = DAT_005b965c + *(int *)(param_1 + 0x44);
      uVar2 = *(int *)(param_1 + 0x2c) + 1;
      *(uint *)(param_1 + 0x2c) = uVar2;
      if ((uint)puVar1[5] <= uVar2) {
        if ((*(byte *)(puVar1 + 4) & 1) != 0) {
          FUN_0040f5b0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
        }
        uVar2 = *(int *)(param_1 + 0x30) + 1;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 0x1c;
        *(uint *)(param_1 + 0x30) = uVar2;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x34) = puVar1[6];
        if (*(uint *)(param_1 + 0x20) <= uVar2) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x48) = 1;
        }
        FUN_00407380(param_1,puVar1,*(undefined4 *)(param_1 + 0x28));
      }
    }
  }
  return;
}

