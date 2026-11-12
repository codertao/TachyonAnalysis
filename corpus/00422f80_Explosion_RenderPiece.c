
/* sweep */

void Explosion_RenderPiece(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00668fd8;
  *(short *)(param_1 + 0x30) = (short)(*(uint *)(param_1 + 0x90) >> 3);
  Rend_SetAnimClock(*(uint *)(param_1 + 0x90));
  if (*(char *)(param_1 + 0x7f) != '\0') {
    Fx_RenderModel(param_1,1);
    Rend_SetAnimClock(uVar1);
    return;
  }
  Ent_Draw(param_1 + 0x18);
  Rend_SetAnimClock(uVar1);
  return;
}

