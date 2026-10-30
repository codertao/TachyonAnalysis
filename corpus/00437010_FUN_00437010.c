
void FUN_00437010(int param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_3 != 0) {
    if (*(short *)(param_3 + 0x76) == 1) {
      local_18 = 1;
      local_14 = *(undefined4 *)(param_1 + 0x20);
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      FUN_0048ddc0(&local_18,param_4);
      if (*(int *)(param_2 + 0x24) != 0) {
        local_14 = *(undefined4 *)(param_1 + 0x54);
        local_18 = 5;
        local_10 = 4;
        local_c = 0;
        local_8 = 0;
        local_4 = 0;
        FUN_0048ddc0(&local_18,param_4);
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        local_14 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xc2);
        local_8 = 0xffffffff;
        local_4 = 0xffffffff;
        local_18 = 8;
        local_10 = 0;
        local_c = 0;
        FUN_0048ddc0(&local_18,param_4);
        return;
      }
    }
    else {
      pcVar1 = *(code **)(*(int *)(param_3 + 0x8c) + 0x40);
      if (pcVar1 != (code *)0x0) {
        iVar3 = (*pcVar1)(param_3);
        if ((iVar3 != 0) && (iVar2 = *(int *)(param_3 + 0xd8), iVar2 != 0)) {
          if (*(int *)(iVar3 + 0x24) != 0) {
            local_14 = *(undefined4 *)(param_1 + 0x20);
            local_4 = *(undefined4 *)(*(int *)(iVar3 + 0x24) + 4);
            local_18 = 1;
            local_10 = 0;
            local_c = 0;
            local_8 = 5;
            FUN_0048ddc0(&local_18,param_4);
            if (*(int *)(param_2 + 0x24) != 0) {
              local_14 = *(undefined4 *)(param_1 + 0x54);
              local_18 = 5;
              local_8 = 5;
              local_4 = *(undefined4 *)(*(int *)(iVar3 + 0x24) + 4);
              local_10 = 4;
              local_c = 0;
              FUN_0048ddc0(&local_18,param_4);
            }
          }
          local_14 = *(undefined4 *)(param_1 + 0x20);
          local_4 = *(undefined4 *)(iVar2 + 0x20);
          local_18 = 1;
          local_10 = 0;
          local_c = 0;
          local_8 = 1;
          FUN_0048ddc0(&local_18,param_4);
          if (*(int *)(param_2 + 0x24) != 0) {
            local_14 = *(undefined4 *)(param_1 + 0x54);
            local_4 = *(undefined4 *)(iVar2 + 0x20);
            local_18 = 5;
            local_10 = 4;
            local_c = 0;
            local_8 = 1;
            FUN_0048ddc0(&local_18,param_4);
          }
        }
      }
    }
  }
  return;
}

