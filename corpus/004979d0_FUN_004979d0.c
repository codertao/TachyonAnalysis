
void FUN_004979d0(undefined4 *param_1,int param_2,Pool *param_3)

{
  SpED *pSVar1;
  Pool *pPVar2;
  SpED *ent;
  
  pSVar1 = (SpED *)*param_1;
  while (ent = pSVar1, ent != (SpED *)0x0) {
    pSVar1 = ent->next;
    if (((ent->poolType == 3) && (*(int *)&ent->field_0xc8 == param_2)) &&
       (pPVar2 = (ent[1].next)->pool, pPVar2 == param_3)) {
      if (ent[1].prev == (SpED *)0x1) {
        FUN_004156d0(ent->netId,pPVar2,0);
      }
      Quad_UnlinkDynamic(ent);
      FUN_0041b9b0(ent);
    }
  }
  return;
}

