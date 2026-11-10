
/* RTXT: relocate in place: record value offsets -> ptrs (base + off + (n+1)*16), group keys_offset
   -> ptr (grouptable + off + 4). No magic check */

void markup_rtxtbin_as_ptrs(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint record_idx;
  int record_count;
  
  record_idx = 0;
  param_1[1] = param_1[1] + (int)param_1;
  record_count = param_1[3];
  piVar2 = param_1;
  if (record_count != 0) {
    do {
      piVar2 = piVar2 + 4;
      record_idx = record_idx + 1;
      *piVar2 = (int)param_1 + *piVar2 + (record_count + 1) * 0x10;
    } while (record_idx < (uint)param_1[3]);
  }
  puVar1 = (uint *)param_1[1];
  record_idx = 0;
  puVar3 = puVar1 + 1;
  if (*puVar1 != 0) {
    do {
      record_idx = record_idx + 1;
      *puVar3 = (int)puVar1 + *puVar3 + 4;
      puVar3 = puVar3 + 2;
    } while (record_idx < *puVar1);
  }
  return;
}

