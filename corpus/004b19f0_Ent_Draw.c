
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: per-instance brightness bias (flag 0x40, +0x10), alpha (0x80, +0x14), scale (0x10) then
   Ent_DrawModel */

void Ent_Draw(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[0x10];
  if (uVar1 != 0) {
    if ((*param_1 & 0x40) == 0) {
      DAT_00666afc = 0;
    }
    else {
      DAT_00666afc = param_1[4] - DAT_00666b00;
      if (DAT_00666afc < -0xff) {
        DAT_00666afc = -0xff;
      }
    }
    if ((*param_1 & 0x80) == 0) {
      DAT_00668f38 = 0xff;
    }
    else {
      DAT_00668f38 = param_1[5];
    }
    if ((*param_1 & 0x10) == 0) {
      DAT_00666b04 = 0x10000;
    }
    else {
      DAT_00666b04 = param_1[1];
    }
    if ((*param_1 & 0x800) == 0) {
      _DAT_00668fe0 = (uint)(ushort)param_1[6];
    }
    DAT_006691e4 = uVar1;
    if (DAT_00669210 != 0) {
      ((byte *)((int)param_1 + 0x1a))[0] = 0xff;
      ((byte *)((int)param_1 + 0x1a))[1] = 0xff;
    }
    Ent_DrawModel(param_1);
    if (DAT_0066920c != 0) {
      Pipe_FlushBatches();
      return;
    }
  }
  return;
}

