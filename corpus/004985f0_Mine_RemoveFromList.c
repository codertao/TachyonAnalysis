
/* sweep: guess */

void Mine_RemoveFromList(int *param_1,int param_2)

{
  SpED *ent;
  
  ent = (SpED *)*param_1;
  if (ent != (SpED *)0x0) {
    while ((ent->poolType != 3 || (*(int *)&ent[1].field_0x40 != param_2))) {
      ent = ent->next;
      if (ent == (SpED *)0x0) {
        return;
      }
    }
    Quad_UnlinkDynamic(ent);
    Dcb_Free(ent);
  }
  return;
}

