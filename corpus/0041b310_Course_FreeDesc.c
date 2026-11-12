
/* sweep */

void Course_FreeDesc(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
    ModelRef_Release(param_1 + 0xa4);
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    ModelRef_Release(param_1 + 0xd0);
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    ModelRef_Release(param_1 + 0xfc);
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    SndTrig_Release(param_1 + 0x108,&DAT_005a61e0);
  }
  return;
}

