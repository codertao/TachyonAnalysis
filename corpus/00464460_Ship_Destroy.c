
/* sweep: guess */

void Ship_Destroy(int param_1)

{
  Ship_FreeExtraData(param_1);
  if (*(int *)(param_1 + 0x29c) != 0) {
    ModelRef_Release(param_1 + 0x29c);
  }
  if (*(int *)(param_1 + 0x290) != 0) {
    ModelRef_Release(param_1 + 0x290);
  }
  if (*(int *)(param_1 + 0x568) != 0) {
    Anim_Free(*(int *)(param_1 + 0x568),1);
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    SndTrig_Release(param_1 + 0x170,&DAT_005a61e0);
  }
  if (*(int *)(param_1 + 0x1bc) != 0) {
    SndTrig_Release(param_1 + 0x188,&DAT_005a61e0);
  }
  if (*(int *)(param_1 + 0x21c) != 0) {
    SndTrig_Release(param_1 + 0x1d4,&DAT_005a61e0);
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    SndTrig_Release(param_1 + 0x1ec,&DAT_005a61e0);
  }
  if (*(int *)(param_1 + 0x224) != 0) {
    SndTrig_Release(param_1 + 0x204,&DAT_005a61e0);
  }
  return;
}

