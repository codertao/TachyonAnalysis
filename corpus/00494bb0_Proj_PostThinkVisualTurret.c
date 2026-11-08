
/* remote-visual turret bolt: cast, on hit just delete (no damage) */

void Proj_PostThinkVisualTurret(int param_1)

{
  int iVar1;
  undefined1 auStack_c [12];
  
  if (((**(uint **)(*(int *)(param_1 + 100) + 0x1c) ^ *(uint *)(param_1 + 0xd0)) & 7) == 0) {
    iVar1 = FUN_00418f80((undefined4 *)(param_1 + 0x34),(undefined4 *)(param_1 + 0xe0),auStack_c,
                         *(int *)(param_1 + 100) + 0x14,param_1,*(undefined4 *)(param_1 + 200),0,
                         &LAB_00494a70);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x3c);
    if (iVar1 != 0) {
      FUN_0041b8c0(param_1);
    }
  }
  return;
}

