
/* sweep */

void Mine_FreeDesc(int param_1)

{
  if (*(int *)(param_1 + 0x140) != 0) {
    ModelRef_Release(param_1 + 0x140);
  }
  if (*(int *)(param_1 + 0x170) != 0) {
    SndTrig_Release(param_1 + 0x150,&DAT_005a61e0);
  }
  return;
}

