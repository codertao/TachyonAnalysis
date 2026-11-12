
/* sweep */

void Pipe_Init(void)

{
  DAT_006c9014 = Mem_AllocChecked(0xa0000,0x10,0,s_Pipeline_Vertices_0055f21c,DAT_0055f1f4);
  if (DAT_006c9014 != 0) {
    DAT_006c9010 = Mem_AllocChecked(0xc000,0x10,0,s__Pipeline_Polys_0055f20b + 1,DAT_0055f1f4);
    if (DAT_006c9010 != 0) {
      DAT_006b0f50 = DAT_006c9010;
      DAT_006c9018 = 0;
      DAT_006b0f4c = 0;
      DAT_006b0f44 = DAT_006c9014;
      DAT_006c8f74 = 0;
      if (DAT_00564ae4 == 0) {
        DAT_00564e4c = 1;
        DAT_006c901c = 0x30;
        DAT_006c8f6c = 0x1e;
        return;
      }
      DAT_00564e4c = 0;
      DAT_006c901c = 6;
      DAT_006c8f6c = 6;
    }
  }
  return;
}

