
/* refine: ambient 0x666b00 (BDF +0xc0; neutral 0x80; reset 0x28); Ent_Draw brightness bias is
   relative to it */

void Light_SetAmbient(undefined4 param_1)

{
  DAT_00666b00 = param_1;
  Light_BuildShadeRamp();
  return;
}

