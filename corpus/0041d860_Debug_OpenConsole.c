
/* sweep: guess */

void Debug_OpenConsole(void)

{
  Gfx_Lock(0x100);
  DAT_005b270c = 0x28;
  Snd3D_ForEachChannel(&LAB_0041d770);
  return;
}

