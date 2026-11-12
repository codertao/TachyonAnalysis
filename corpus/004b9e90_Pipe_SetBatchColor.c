
/* refine: packs ARGB into DAT_006c8f64, copied into new batches (+0x10) */

void Pipe_SetBatchColor(int param_1,uint param_2,uint param_3,uint param_4)

{
  DAT_006c8f64 = ((param_1 << 8 | param_2) << 8 | param_3) << 8 | param_4;
  return;
}

