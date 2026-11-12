
/* sweep: guess */

void SndTrig_FreeSample(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = Audio_ReleaseSample(*(undefined4 *)(param_1 + 0x24));
    if (iVar1 == 0) {
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      *(undefined1 *)(param_1 + 0x23) = 0;
      OurFreeMem(*(undefined4 *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return;
}

