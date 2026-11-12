
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Snd3D_InitPool(int param_1)

{
  _DAT_005897a0 = param_1;
  Pool_Init((Pool *)&DAT_00589760,param_1,0x58,0x54a4e8,0xcccc);
  return;
}

