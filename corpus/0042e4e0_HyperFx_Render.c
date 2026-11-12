
/* sweep */

void HyperFx_Render(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd4) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xffff;
    Ent_Draw(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  *(int *)(param_1 + 0x54) = DAT_005b3304 << 0x10;
  Ent_Draw(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

