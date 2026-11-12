
/* sweep: guess */

void Beam_ThinkFade(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0xd4);
  *piVar1 = *piVar1 + -6;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if ((*(int *)(param_1 + 0xf4) == 0) && (*(int *)(param_1 + 0xd8) == 1)) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xd4);
    Model_ApplyStateCurves(param_1 + 0x18,0);
    *(undefined4 *)(param_1 + 0x2c) = DAT_00668f38;
    Beam_AttachToOwner(param_1);
  }
  if (*(int *)(param_1 + 0xd4) == 0) {
    Quad_Unlink(param_1);
  }
  return;
}

