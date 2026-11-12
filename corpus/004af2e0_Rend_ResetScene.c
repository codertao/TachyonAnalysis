
/* refine: clears material/texture cache 0x62c12c, palette cache, loaded-pak table; ambient 0x28;
   vertex light mode 0 */

void Rend_ResetScene(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0062c12c;
  for (iVar1 = 60000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_006128c0;
  for (iVar1 = 0x600; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_006110a0;
  for (iVar1 = 0x600; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00666aac = 0;
  DAT_0062c124 = 1;
  DAT_00666b00 = 0x28;
  Light_SelectVertexMode(0);
  if (DAT_006691f8 == 0) {
    DAT_006691f8 = 0x80;
  }
  if (DAT_006691fc == 0) {
    DAT_006691fc = 0x80;
  }
  if (DAT_006691f4 == 0) {
    DAT_006691f4 = 0x80;
  }
  Pak_SetLoadPalParams(0x80,0x80,0x80,0x80,0x80);
  Light_SetLightColor(0xff,0xff,0xff);
  Nop();
  Rend_SetFlushPerEntity(1);
  Rend_SetForceClip(1);
  return;
}

