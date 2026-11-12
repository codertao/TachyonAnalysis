
/* sweep */

void FireFx_RenderAnimated(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_00668fd8;
  uVar2 = *(int *)(param_1 + 0xf0) + 1;
  *(short *)(param_1 + 0x30) = (short)(uVar2 >> 2);
  *(uint *)(param_1 + 0xf0) = uVar2;
  Rend_SetAnimClock(*(undefined4 *)(param_1 + 0x90));
  Ent_Draw(param_1 + 0x18);
  Rend_SetAnimClock(uVar1);
  return;
}

