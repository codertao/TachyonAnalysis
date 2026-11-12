
/* sweep */

void SndTrig_SetVarC0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc0) = param_1;
  return;
}

