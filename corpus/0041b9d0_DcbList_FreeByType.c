
/* sweep */

void DcbList_FreeByType(SpED *param_1,uint param_2)

{
  SpED *ent;
  
  while (ent = param_1, ent != (SpED *)0x0) {
    param_1 = ent->next;
    if ((ushort)ent->poolType == param_2) {
      Quad_UnlinkDynamic(ent);
      Dcb_Free(ent);
    }
  }
  return;
}

