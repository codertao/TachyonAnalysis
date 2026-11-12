
/* sweep: guess */

void Proj_ThinkAnimated(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
  }
  Model_UpdateStateCounters(param_1 + 0x18,0);
  *(undefined2 *)(param_1 + 0x32) = 0xffff;
  Ent_Draw(param_1 + 0x18);
  return;
}

