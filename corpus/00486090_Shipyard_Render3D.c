
/* sweep */

void Shipyard_Render3D(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  call_Math_SinCos3((float *)&DAT_005b9628,0,0,0);
  Rend_SetCamera(&DAT_0056e3ac,&DAT_0056e3c4);
  set_global_near_far(0xa000,0x2ee0000);
  Ent_ToCameraSpace(&DAT_0056e340);
  Ent_Draw(&DAT_0056e340);
  puVar2 = &DAT_00587b7c;
  iVar1 = 5;
  do {
    if (puVar2[-0x46] != 0) {
      Ent_ToCameraSpace(puVar2 + 0x14);
      Ent_Draw(puVar2 + 0x14);
      Ent_ToCameraSpace(puVar2);
      Ent_DrawAtLod(puVar2,DAT_00564ae4 == 0);
    }
    puVar2 = puVar2 + 0x6d;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  set_global_near_far(0x2000,0x13880000);
  return;
}

