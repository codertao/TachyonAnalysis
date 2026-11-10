
void FUN_00454580(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00455dd0(*(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x158));
  Power_Init(param_1 + 0x11c,*(int *)(param_1 + 0x8c) + 0xd0,1,uVar1,*(undefined4 *)(param_1 + 0xfc)
            );
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(int *)(param_1 + 0x110) = param_1;
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  FUN_00454540(param_1);
  return;
}

