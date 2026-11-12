
/* sweep */

void Fx_RenderAnimSlow(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00668fd8;
  *(short *)(param_1 + 0x30) = (short)(*(uint *)(param_1 + 0x90) >> 3);
  Rend_SetAnimClock(*(uint *)(param_1 + 0x90));
  Fx_RenderModel(param_1,1);
  Rend_SetAnimClock(uVar1);
  return;
}

